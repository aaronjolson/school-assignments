/*
Aaron Olson
Sec 20

This program initializes a two-dimensional 3x5 array-of-double and uses
a VLA-based function to copy it to a second two-dimensional array. Also provide a
VLA-based function to display the contents of the two arrays. The two functions
are capable, in general, of processing arbitrary NxM arrays.
*/

#include <stdio.h> 
#define ROWS 3 
#define COLS 5 
void varr(int rows, int cols, double ar[rows][cols]); 
void copy_varr(int rows, int cols, double c_ar[rows][cols], 
 
 double matrix[rows][cols]); 

int main(void) 
{ 
 int i, j;
 double data[ROWS][COLS] = { 
 {4.2, 3.5, 3.6, 4.6, 13.1}, 
 {4,22,14,58,9},
 {34.0, 3.5, 18.2, 5.2, 3.9}
 }; 
 
 double moreData[ROWS][COLS]; 
 
 printf("Original array:\n"); 
 varr(ROWS, COLS, data); 
 copy_varr(ROWS, COLS, moreData, data);
 printf("\n");
 printf("Copied array:\n"); 
 varr(ROWS, COLS, moreData);
 
 system("PAUSE");
 return 0; 
} 

void varr(int rows, int cols, double ar[rows][cols]) 
{ 
 int r, c; 
 
 for (r = 0; r < rows; r++) 
    { 
     for (c = 0; c < cols; c++)
     printf("%5g ", ar[r][c]); 
     printf("\n"); 
    } 
} 

void copy_varr(int rows, int cols, double c_ar[rows][cols], 
 double matrix[rows][cols]) 
{ 
 int r, c; 
 
 for (r = 0; r < rows; r++) 
 for (c = 0; c < cols; c++) 
 c_ar[r][c] = matrix[r][c]; 
} 
