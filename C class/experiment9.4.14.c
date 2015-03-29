#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[])
{
    
    
     /* separate */
  
float var = 1.54334E-34;
double var2 = 1.54334E-34;

printf("\n normal:%f\n sci:%e \n or \n sci:%E   \n",var,var,var);
printf("\n normal:%f\n sci:%e \n or \n sci:%E   \n",var2,var2* 1.0E3 ,var2 * 1.0e3);
printf("\n");
  
    bool keep_going = true;  // Could also be `bool keep_going = 1;`
    while(keep_going) {
        printf("This will run as long as keep_going is true.\n");
        keep_going = false;    // Could also be `keep_going = 0;`
    }
    printf("Stopping!\n");
    
    /* These are completely separate */
    
    char str1[20] = "Helloooooooo";
    
    int i =0;
     
    for ( i =0; i < 20; i++ )
    {
        printf ("%c\n", str1[i]);
    }
    
    
    /* separate again */
    
  int x;
  int y;
  int array[8][8]; /* Declares an array like a chessboard */
  
  for ( x = 0; x < 8; x++ ) {
    for ( y = 0; y < 8; y++ )
      array[x][y] = x * y; /* Set each element to a value */
  }
  printf( "Array Indices:\n" );
  for ( x = 0; x < 8;x++ ) {
    for ( y = 0; y < 8; y++ )
    {
        printf( "[%d][%d]=%d", x, y, array[x][y] );
    }
    printf( "\n" );
  }
  getchar();
  
  
  
  system("PAUSE");	
  return 0;
}
