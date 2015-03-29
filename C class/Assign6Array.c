#include <stdio.h>
#include <stdlib.h>

/*
Aaron Olson
Sec 20
10.6.14

this program creates an 8 element array 
and uses a for loop to set the values of the array to powers of 2
It uses a do while loop to print those values.
*/

int main(int argc, char *argv[])
{
int i, list[9]; // declare variables
printf("The first eight powers of 2 are:\n"); //print output description
for (i = 1; i <= 8; i++) 
{
list[i] = pow(2, i); // set each element of the array to a power of 2
do {
   printf(" %d\n", list[i]); // prints an element of the array
   } while( i == 9);
}
  system("PAUSE");	
  return 0;
}
