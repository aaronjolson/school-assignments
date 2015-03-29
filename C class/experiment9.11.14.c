#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  /* skip2.c -- skips over first two integers of input */
 int n;
 printf("Please enter three integers:\n");
 scanf("%*d %*d %d", &n);
 printf("The last integer was %d\n", n);

  system("PAUSE");	
  return 0;
}
