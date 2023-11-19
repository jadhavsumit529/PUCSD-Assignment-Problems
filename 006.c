/*
------------------------------------------------------
Problem 06: 1,2,3 check
------------------------------------------------------
Given an array A of size n. Array contains only 3, 1, and 2
Output: 1 if all 3s followed by 1s followed by 2s
        otherwise 0;
eg
    Input : 3 3 3 1 1 2 2 2
    Output: 1
    Input : 2 2 1 1 3 3 3
    Output: 0
*/

/*
 *    P : n > 0 and elements are from {1,2,3}
 *    Q : k will hold value till [0,i)
 *    R : k is output in [0,n)
 */
int chk_ord(int a[], int n) {
    int i = 1;
    int k = 1;

    while(k*(n-i) != 0) {
        if(a[i-1] != a[i]) {
            if(a[i-1] == 2 || (a[i-1] == 1 && a[i] != 2))
                k = 0;
        }
        i = i + 1;
    }

    return k;
}

int main(void) {
}
