#include <stdio.h>

int product (int p1, int p2); /*prototype*/

int main()
{
      int x, y, result;
      x = 78;
      y = 5;
      result = product(x,y);
      
      printf("%d * %d = %d\n", x, y, result);
      
      system("pause");
      return 0;
           
}

int product (int p1, int p2)
{
    return p1 * p2;
}
