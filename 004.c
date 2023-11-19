/*
---------------------------------------------------
Problem 04: unique element in k dif array
---------------------------------------------------

An array is k dif array if 
for all i, 0 <= i < (n-1), abs(A[i] - A[i+1])) = k
[Note:abs(-x) = x]

Given an intger k and a k-dif array A of size n.
Ouput: Count number of unique elements of array A.
*/

/*
 *   P : n > 0 and any 2 cosecutive elements in array
 *       has absoulte difference is k
 *
 *   Q : a[i]+c*k = r 
 *       op is unique elements in a[0,i)
 *       ps unique elements which were +k than r
 *       ms unique elements which were -k than r
 *
 *   R : op is unique elements in a[0,n)
 */
int unq_kdif(int a[], int n) {
    // Read Q for more details on variables
    int ps = 0, ms = 0, r = a[0];
    int c = 0,  op = 1;
    int i = 1;

    while(n-i != 0) {
        if (a[i] < r)      { c = c - 1; }
        else if (a[i] > r) { c = c + 1; }

        if(c < ms) { ms = c; }
        if(c > ps) { ps = c; }

        op = ps - ms + 1;
        i = i + 1;
    }

    return op;
}

int main(void) {
}
