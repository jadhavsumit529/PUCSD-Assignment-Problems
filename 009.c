/*
 ------------------------------------------------------
Problem 09: Exactly 2 0s
------------------------------------------------------
Given an array of size n. Write a program which will
compute start index and last index of longest segment. 
Segment(i,j) =>  (Number of 0s in [i,j]) = 2
*/

struct search_result {
    int found;
    int start;
    int end;
};


/*
 *   P : n >= 0
 *   Q : ret will hold search result in a[0,m)
 *       k is end index of last segment in a[0,m)
 *       next value of k is fz+1
 *   R : ret in a[0,n)
 */
struct search_result exactly2_0s(int a[], int n) {

    // ret will hold start and end of longest segment
    // if there is no such segment than found is 0.
    int m = 0;
    struct search_result ret;
    ret.found = 0;
    
    //k is end index of last segment which has exactly 2 0s
    int k = 0;

    // If segment found fz will hold index of first zero
    // sz will hold index of second zero
    int fz,  sz;

    // Following 2 loops will initiazlie fz and sz
    while(n-m != 0 && a[m] != 0) { m = m + 1; }
    if(n-m != 0) { fz = m; m = m + 1; }

    while(n-m != 0 && a[m] != 0) { m = m + 1; }
    if(n-m != 0) {  sz = m; }

    // if m has not reached n that means we have found
    // a segment therefore initialize 'ret' properly
    if(n-m != 0) {
        ret.found = 1;
        ret.start = k;
        ret.end = m;
    }

    while(n-m != 0) {
        if(m-k > ret.end - ret.start) {
            ret.start = k;
            ret.end = m;
        }
        if(a[m]==0) {
            k = fz + 1;
            fz = sz;
            sz = m;
        }
        m = m + 1;
    }
    return ret;
}

int main(void) {
}
