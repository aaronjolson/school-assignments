/*
Aaron Olson
Sec 20

this program asks the user to enter a number and another number. 
It takes the first number and raises it to the power of the second.
*/ 
#include <stdio.h>
double power(double n, int p); // ANSI prototype

int main()
{
double x, xpow;
int exp;
  printf("Enter a number and the positive integer power");
  printf(" to which\nthe number will be raised. Enter q");
  printf(" to quit.\n");
  if (scanf("%lf%d", &x, &exp) == 2) // take user input
    {
      xpow = power(x,exp);
      printf("%.3g to the power %d is %.5g\n\n", x, exp, xpow);
      main(); // recursive call to main()
    }
  return 0;
}

double power(double n, int p)
{
  double pow = 1;
  int i;
  for (i = 1; i <= p; i++)
    if (p % 2 == 0){ 
      pow *= abs(n);
    }
    else{
       pow *= n;  
    }
  return pow; // return the value of pow
}
