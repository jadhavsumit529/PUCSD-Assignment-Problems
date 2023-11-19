/*
-----------------------------------------------
Problem 02: common segments in arrays 
-----------------------------------------------
Given 2 arrays A and B of sizes n1 and n2 respectively.
Both the arrays have integers in non-decreasing order.
all i,j : (0 <= i <= j < n1)  A[i]<= A[j] 
all i,j : (0 <= i <= j < n2)  B[i]<= B[j] 
Output size of longest sgement which is common in both arrays.
eg
     A =  a1 a1 a2 a3 a4 a4 a5 a6 a6 a6 a7 a8
                         |---------|
     B =  a1 a2 a4 a5 a6 a6 a7 a9
                 |--------|
output: 4  (becuase longest common segment is (a4 a5 a6 a6).)
*/


/*
 *    P : n1 > 0 and n2 > 0
 *    Q : cnt = length of longest segment in a[0,l1) and
 *              b[0,l2) 
 *        m   = segments a[l1-m, l1) and b[l2-m, l2) are same
 *    R : cnt = length of longest common segment
 */
int len_cmn_segment(int a[], int b[], int n1, int n2) {

    // cnt is length of longest common segment 
    // in a[0,l1) and b[0,l2)
    // 0 <= l1 <= n1     0 <= l2 <= n2
    int cnt = 0;
    int l1 = 0, l2 = 0;

    // m elements a[l1-m, l1) and b[l2-m, l2) are same
    int m = 0;

    while((n1-l1)*(n2-l2) != 0) {
        if(a[l1] == b[l2]) { m = m + 1; }
        else { m = 0; }
        
        if(m > cnt) { cnt = m; }
        
        if(a[l1] <= b[l2])  { l1 = l1 + 1; }

        if(a[l1] >= b[l2])  { l2 = l2 + 1; }
    }

    return cnt;
}


int main(void) {
}


