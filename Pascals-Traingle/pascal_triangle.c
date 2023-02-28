#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char * argv[]){
    if (argc != 2) {
        printf ("Usage: %s <number_of_rows> \n", argv[0]);
        return 1;
    }

    int rows = atoi(argv[1]); 
    printf ("Number of rows: %d \n", rows);

    // traversing (compute and print) each rows
    for (int n = 0; n < rows; n++){
        // beginning of each row assign val = 1
        int val = 1;
        printSpaces(rows, n);
        printCoeffs(n, val);
        printf("\n");
    } 
    printf ("\n"); 
    return 0;
}


// printout required spaces prior to printout the coeffs in each row. Such
// printout of spaces are for alignment purpose. 
int printSpaces(int rows, int n){

    for (int j = 1; j < (rows - n); j++){
        printf ("  ");
    }

    return 0;
}

// printout the coefficients of a row of the triangle. This function
// only prints a row

int printCoeffs(int n, int val){
    for (int r = 0; r <= n; r++){
        printf ("   %d", val);
        val = val * (n - r) / (r + 1);
    }
    return 0;
}

