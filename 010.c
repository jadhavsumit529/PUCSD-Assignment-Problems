/*
 -----------------------------------------------------------
Problem 10: sum is k
-----------------------------------------------------------
Given 2 arrays A1 and A2 of integers of sizes n1 and n2
 respectievly and another integer k. Each arrray is sorted 
in ascending order. 
Write a program which computes total number of 
pairs(lets say(x,Y)) such that x+y=k and x is from A1 
and y is from A2. 
(Note: we just need count of pairs)
 */

#include<stdio.h>

/*
 * P : n1 > 0 && n2 > 0
 * Q : cnt = count of elements insersect(a1[0,m1), a2[0,m2))
 * R : cnt = count of elements intersect(a1[0,n), a2[0,n))
 */
int count_common(int a1[], int n1, int a2[], int n2) {
    // cnt will hold count of common elements
    // of a1[0,m1) and a2[0,m2)
    int m1 = 0, m2 = 0;

    // Initializing value of cnt
    int cnt = 0; 
    if(a1[0] == a2[0]) { cnt = 1; }

    // As we have counted for a1[0] and a2[0] 
    // Initially we are setting last common element as
    // min of a1[0] and a2[0]. This will also change m1 and m2
    int lcmn;
    if(a1[0] <= a2[0]) { lcmn = a1[0]; m1 = 1;}
    if(a1[0] >= a2[0]) { lcmn = a2[0]; m2 = 1;}

    while((n1-m1)*(n2-m2) != 0) {
        if(a1[m1]==a2[m2] && a1[m1] != lcmn) {
            cnt = cnt + 1;
        }
        if(a1[m1] <= a2[m2]) { 
            lcmn = a1[m1];
            m1 = m1 + 1; 
        } else {
            lcmn = a2[m2];
            m2 = m2 + 1;
        }
    }
    return cnt;
}

int main(void) {
}
