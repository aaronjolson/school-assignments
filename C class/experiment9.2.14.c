#include <stdio.h>
#include <stdlib.h>

/*  
Format of a C for-loop

for ( variable initialization; condition; variable update ) {
    Code to execute while the condition is true
    }
*/

/* can use the <= , += , -=, *=, /= operators */

/* prints the digits 1-10 */
int main(int argc, char *argv[])
{
    int x;
    for ( x = 1; x <= 11; x += 2 ) {
        printf("%d\n", x);
        }
  
  system("PAUSE");	
  return 0;
}
