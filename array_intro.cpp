#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    
    int** arrs;          // declares a pointer to an array of pointers, a 2 dimensional array, arrs[][]
    int n, q;            // number of arrays and number of queries
    scanf("%d %d", &n, &q);  // getting n, and q from user
    arrs = new int*[n];      // sets the number of arrays in arrs

for(int i = 0; i < n; ++i){  /* first for loop is to find k(the number stating the array size about to be
                              iterated over) and create the different arrays*/
    int k;
    scanf("%d", &k);        // scans for first input, which is the length of the following array
    
    arrs[i] = new int[k];   /*setting up length of each array within arrs[][]. arrs[i] =new int[k]
                             arrs[0] and arrs[1] are the first and second array in the 'array of arrays'
                             new int[k] defines the length of each individual array in arrs */
    
    for(int j = 0; j < k; ++j) {  // second for loop is for scanning in the values of each array
        scanf("%d", &arrs[i][j]); /* arrs[i][j]     [i] is the number of different arrays (y axis)
                                   [j] is the values in each array (x axis) */
    }
}
for(int i = 0; i < q; ++i) {   /* for loop for queries, for each querry two values are scanned and
                                the queried values are printed*/
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", arrs[a][b]);
}

//for(int i = 0; i < n; ++i)    /* final for loop used for clearing this data so the program can be re ran
//                                */
//delete[] arrs[i];
    //return arrs;
delete[] arrs;// clears the array of arrays to free up memory.
    //return arrs;
    return 0;
}

