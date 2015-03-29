#include <stdio.h>
#include <stdlib.h>

int reverseAString()
{
    char string[256];
    int i;

    printf("Enter a string:\n");
    gets(string);
    printf("\n");
    for(i=strlen(string)-1;i>-1;i--)

    printf("%c",string[i]);
    printf("\n");
    }

int main(int argc, char *argv[])   
{
    reverseAString();
  
  system("PAUSE");	
  return 0;
}
