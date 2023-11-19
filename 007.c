/*
----------------------------------------------
Problem 07: range check
----------------------------------------------
Given array A of size n.(n > 0) 
Output: 1 if all elements are in between A[0] and A[n-1]
        otherwise 0
(Note: When we say k is in between j and h it means 
       h <= k <= j     or     j <= k <= h)
*/

int chk_rng(int a[], int n) {
    int i = 0;
    int k = 1;

    int mn, mx;
    if(a[0] > a[n-1]) { mn = a[0];   mx = a[n-1]; }
    else              { mn = a[n-1]; mn = a[0];   }

    while(k*(n-i) != 0) {
        if(mn > a[i] || mx < a[i]) {
            k = 0;
        }
        i = i + 1;
    }

    return k;
}

int main(void) {
}
