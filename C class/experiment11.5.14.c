#include <stdio.h>

int main(void )
{
    char * str = "my number is 12.6";
    printf("str is: %s\n", str);
    char str2[80];
    float f1;
    sscanf(str, "my number is %f",&f1);
    sprintf(str2, "my float number is %f\n", f1);
    
    char * numstr = str;
       
    system("PAUSE");	
  return 0;
}
