#include <iostream>
#include <stdio.h>
#include <vector>
/// basic program for populating an array of arrays
//2 2
//3 1 5 4
//5 1 2 8 9 3
//0 1
//1 3

using namespace std;
int main() {
    
    int num_arrays, num_queries;
    scanf("%d %d", &num_arrays, &num_queries);
    int** array_of_arrays;  /* array_of_arrays[i][j], where i is row, and j is column */
    array_of_arrays = new int*[num_arrays]; // sets the number of arrays (rows)
    int k;  // length of each array
    for(int i=0; i<num_arrays; i++){  //first scan in number of arrays to be iterated over
        scanf("%d", &k);
    array_of_arrays[i] = new int[k];  // sets up length of array about to be iterated over
        for(int j=0;j<k;j++)         // then scan in values of each array
            scanf("%d", &array_of_arrays[i][j]);}
    //now need to address the queries
    int a;  // row query
    int b;  // column query
    
    for(int i=0; i<num_queries;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", array_of_arrays[a][b]);
    }
    
    
    
    
    }

    



