/*
----------------------------------------------
Problem 12: Mirror
----------------------------------------------
Given an array of intgeres, A of size n. 
Elements are stored in non-decreasing order.

Output: Count of all x such that x and -x
        both are present in A.
*/
/*
 *   P : n >=0 and a is in non-decreasing order
 *   Q : cnt hold count of pairs (x,y) 
 *       in x in a[0,m) and y in a[k,n) such that
 *       x+y = 0
 *   R : cnt will hold count for (x,-x) pairs in
 *       a[0,n)
 */
int mirror(int a[], int n) {
    int m = 0, k = n-1;
    int cnt = 0;
    while(k-m >= 0) {
        if(a[m]+a[k] == 0)
            cnt = cnt + 1;
        if(a[m]+a[k] <= 0)
            m = m + 1;
        if(a[m]+a[k] >= 0)
            k = k - 1;
    }
    return cnt;
}

int main(void) {
}
