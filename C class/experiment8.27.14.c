#include <stdio.h>
#include <stdlib.h>

/* This file converts an inputed number in inches to Cm with 2 digits of precision visible after the float. 
- The console asks for a number input
- The program converts the number to Cm by multiplying it by 2.54
- The program prints the result
*/

int main(int argc, char *argv[])
{
float inputInches;
float outputCm; 

printf("Enter a number in inches:");
scanf("%f",&inputInches);

outputCm = inputInches * 2.54;

printf("That number in Cm is ");
printf("%.2f ",outputCm); 
  
  system("PAUSE");	
  return 0;
}
