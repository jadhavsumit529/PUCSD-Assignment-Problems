/*
--------------------------------------
Problem 11: index diff
--------------------------------------
Given an array A of size n. A contains integers
in non-decreasing order.

Output: count of all pairs x,y 
        such that A[x]-A[y] < y-x
*/
int idx_diff(int a[], int n) {
    int cnt = 0;
    //  For each m there are n-m pairs
    //  cnt = n-1+n-2+n-3...n-n-1
    //  cnt = (n+....+n) - (1+2+...(n-1))
    //  n(n-1) - ((n-1)*n / 2)
    //  n*(n-1) / 2
    
    cnt = (n * (n-1)) / 2;
    return cnt;

}
int main(void) {
}

