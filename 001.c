/*
----------------------------------------------------------
Problem 01: page numbers
----------------------------------------------------------
Given 2 arrays of same size, A and B, each array having
'n' postive integers. Each number in array represent
page number of a book.
A[i] is first page number of chapter i
B[i] is last page number of chapter i
New chapter may start on same page where previous one ended.
(First page of chapter should be <= last page of the chapter)

output 1 if given arrays does follow these rules
       otherwise 0.
----------------------------------------------------------
*/


/* P : n > 0
 * Q : k will hold result for [0,m) chapters
 * R : k is 1 if pages follows given rules 
 *     otherwise k is 0.
 */
int chk_book(int sp[], int lp[], int n) {
    
    // Output. Hold value for chapters [0,m)
    // so initially it will be 1
    int k = 1;

    // m indicates how many chapters were verfied till now
    int m = 0;
    // p indicates previous chapters last page.
    // As m is 0 there is no previous chapter 
    // therefore valid value as per the rules is sp[0]
    int p = sp[0];

    while(k*(n-m) != 0) {
        if(sp[m] <= lp[m] || (p != sp[m] && (p+1) != sp[m]))
            k = 0;
        p = lp[m];
        m = m + 1;
    }
    return k;
}


int main(void) {
}
