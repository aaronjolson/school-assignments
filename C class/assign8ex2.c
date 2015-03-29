#include <stdio.h>

/*
Aaron Olson
Sec 20

this program asks the user to input a bunch of characters. It
*/

int main(void)
{
int ch;
int i=0;
int total=0;

printf("Input some characters. Press enter to run. Ctrl-Z to quit.\n\n");
while((ch=getchar()) != EOF)
  {
    if((i%10) == 0)
        printf("\n");
    if (ch == '\n')
        printf( "\n\\n ");
    else if (ch == '\t')
        printf("\\t%d ", ch);
    else if (ch < ' ')
        printf("^%c%d  ", ch+64, ch);
    else
        printf("%c%d  ",ch, ch);
    total += ch;
    printf("%d\n", total);
    i = i+1;
  }
return 0;
}
