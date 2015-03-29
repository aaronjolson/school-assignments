#include <stdio.h>
/* floating point arithmetic is approximately 7 times slower than integer arithmetic */  
int main()
{
    float first, second, sum;
    
    printf("enter a floating point number: ");
    scanf("%f", &first);
    
    printf("enter another floating point number: ");
    scanf("%f", &second);
    
    printf("%f / %f = %f\n", first, second, sum);
    
    sum = first / second;
    
    system("pause");
    return 0;
    
}
