/*
 ------------------------------------------
Problem 03: max occurrence 
------------------------------------------

Given an array A of size n. It contains integers
in non decreasing order.
all i,j: 0 <= i <= j < n, A[i] <= A[j]

output : number which occurs most number of times.

 eg input : [a1, a1, a1, a3, a3, a3, a3, a2]
    output: a3
*/

/*
 *   P : array a is in non-decreasing order and n > 0
 *
 *   Q : l = a[m] lcnt = count of a[m] in [0,m)
 *       k = number which occurrs most number of time in a[0,m)
 *       mcnt = occurrence of k in a[0,m)
 *
 *   R : k = number which occurrs most number of times.
 *
 */
int max_occ(int a[], int n) {
    // In a[0,m), k is element 
    // which ocurrs most number of times
    // mcnt is count of k
    int m = 1, k = a[0], mcnt = 1;

    // l is a[m] and lcnt is count of lcnt in a[0,m)
    int l = a[0], lcnt = 1;

    while(n-m != 0) {
        if(a[m]==l) { lcnt = lcnt + 1; }
        else        { lcnt = 1;  l = a[m]; }

        if(lcnt > mcnt) { 
            mcnt = lcnt; 
            k = l;
        }
        m = m + 1;
    }

    return k;
}


int main (void) {
}
