/*
----------------------------------------------
Problem 08: k-range peaks
----------------------------------------------
Given an array A of size n and another positive integer k.
(n >= 3)

Output: count of all i such that 1 <= i <= n-2;  
        |A[i] - A[i+1]| < k and 0 <= (A[i]-A[i-1]) < k
(Note: Corner elements are not considered in the count)
*/

int abst(int n) {
    int op = n;
    if(n < 0)
        op = op*(-1);
    return op;
}

/*
 *   User has given n >= 3 but I have derived for n >= 0
 *
 *   P : n >= 0
 *   Q : cnt will hold count of all elements a[p] such that
 *       |a[p]-a[p+1]| < k and 0 <= (a[p]-a[p-1]) < k
 *       in a[0,i)
 *
 *
 */
int cnt_krng(int a[], int n, int k) {
    /*
     * v keeps state for a[i-1] and a[i-2]
     *   v is 1 if (a[i-1]-a[p-2]) is in [0,k)
     *   otherwise 0
     *
     * cnt holds count of elements which follows k-range-peak 
     *   condition in a[0,i)
     */
    int i = 1;
    int cnt = 0;
    int v = 0;
    while(n-i > 0) {
        if(abst(a[i] - a[i-1]) < k && v == 1) {
            cnt = cnt + 1;
        }
        if(a[i] - a[i-1] >= 0 && a[i] - a[i-1] < k) {
            v = 1;
        } else {
            v = 0;
        }
        i = i + 1;
    }
    return cnt;
}

int main(void) {
}
