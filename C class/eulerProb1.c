#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int sum = 0;
 int num = 0;
 
  while (num < 1001){ 
     if  (num % 3 == 0 || num % 5 == 0){
         sum += num;
         printf("%d\n", sum);
     }
     num ++;
}
  system("PAUSE");	
  return 0;
}
