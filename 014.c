/*
---------------------------------------------------
Problem 14 : Count Segments
---------------------------------------------------
  Given an array of integers A and size n.
  Output: Count of all segments
  eg
   a1 a1 a1 a1 a2 a2 a3 a3 a1 a1 a2 a2 
   |---------| |---| |---| |---| |----|
   output = 5
*/

/*
 *   P : n > 0
 *   Q : cnt will hold cnt of segments in a[0,m)
 *   R : cnt = count of seg in a[0,n)
 */
int cnt_seg(int a[], int n) {
    int m = 1, cnt = 1;
    while(n-m != 0) {
        if(a[m-1] != a[m]) 
            cnt = cnt + 1;
        m = m + 1;
    }
    return cnt;
}

int main(void) {
}
