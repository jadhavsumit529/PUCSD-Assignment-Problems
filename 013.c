/*
------------------------------------------------------------
Problem 13:   Sum 0 neigbours
------------------------------------------------------------
Given an array of integers A and size 'n'
Output: count of elements whose neigbours sum is 0.
   Remember corner element (0 or n-1) has only one neighbour.
   for all other elements A[i], neigbours are A[i-1] and A[i+1]

You have to write program without computing 
sum of A[i-1] and A[i+1]
*/

/*
 *    P : n > 0
 *    Q : cnt will hold cnt of all elements 
 *        such that a[i+1]+a[i-1] == 0 in a[0,i)
 *    R : cnt will count of all elements in a[0,n)
 */        
int cnt0sum(int a[], int n) {
    int cnt = 0;
    int i = 1;
    //v will hold a[i-1] which will be 0 initially
    int v = 0;
    while(n-i != 0) {
        if(v == -a[i]) {
            cnt = cnt + 1;
        }
        v = a[i-1];
        i = i + 1;
    }
    // For last element
    if(v==0) {
        cnt = cnt + 1;
    }
    return cnt;
}

int main(void) {
}
