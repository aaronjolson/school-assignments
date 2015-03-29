#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
//#define pi  3.141592653589793238462643383

int main(int argc, char *argv[])
{
    //Variable declaration field
    double x, outputCm, radius, pi;
    
    //Prompt for input of an integer an stores the integer in x
    printf("Enter an integer:");
    scanf("%lf",&x);
 
    outputCm = x * 2.54;
    //Computation of areas formulas
    radius = x/2;
    pi = 3.141592653589793238462643383;
    
    //area of a circle
    double circleArea = (pi * (radius * radius));
    printf("The area of a circle using %.1lf is %lf\n ", x, circleArea);

    printf("That number in Cm is ");
    printf("%.2lf\n",outputCm);
    printf("PI is equal to %lf\n ", pi);
  
  
  system("PAUSE");	
  return 0;
}
