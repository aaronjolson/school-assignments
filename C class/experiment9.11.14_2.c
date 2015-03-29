#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  char mychar;
  char * myaddress;
  printf("The address of mychar is %p\n", &mychar);
  
  myaddress = &mychar;
  *myaddress = '!';
  printf("My address is %p, and my value is %c\n", myaddress, mychar);
  
  
  system("PAUSE");	
  return 0;
}
