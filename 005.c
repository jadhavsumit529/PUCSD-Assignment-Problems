/*
----------------------------------------------------
Problem 05: groups
----------------------------------------------------
Given an array A of size n. Array contains 
only 0,1 and 2. 

Output: 1 if there is no other element between two elements
        with same value otherwise output will be 0.
eg1   Input : 0 0 0 2 2 2 1 1 1
      Output: 1
eg2   Input : 1 1 1 0 0 2 2
      Output: 1
eg3   Input : 2 2 1 1 0 0 1 1
      Output: 0
      Here 1s are not grouped together. 
*/
/*
 *   P : n > 0
 *
 *   Q : f is number of groups in [0,i)
 *       if its f>3 k is 0 if f is 3
 *       and its same as first group than k is 0
 *
 *   R : k = 1 if there are only 3 different groups
 *       otherwise k = 0
 */
int chk_grp(int a[], int n) {
    // f is number of groups in [0,i)
    // p is element from 1st group
    int f = 1, p = a[0], i = 1;
    int k = 1;

    while(k*(n-i) != 0) {
        if(a[i-1] != a[i]) { f = f + 1; }

        if(f > 3) { k = 0; }

        if(f == 3 && a[i] == p) { k = 0; }

        i = i + 1;
    }
    return k;
}

int main(void) {
}
