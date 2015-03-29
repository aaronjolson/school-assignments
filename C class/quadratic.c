#include <stdio.h>
#include <math.h>

int main()
{
instructions();

printf("enter a: ");
scanf("%d", &a);
printf("enter b: ");
scanf("%d", &b);
printf("enter c: ");
scanf("%d", &c);

printf("%d(x*x) + %d x + %d = 0\n".
                a,b,c;
                
disc = discriminant(a,b,c);
printf("discriminant

if(disc <=0){
        prinntf ("root 1 = %f \n", root1(a,b,c));
        
        else
        printf("root 2 = %f -fi\n",
             

return 0;    
}

int discriminant(int a, int b, int c)
{
 int result;
 result = b*b - 4*a*c;
 return result;    

}

float root1( int a,int b, int c)
{
float result;
result = (-b + sqrt(discriminant(a,b,c)) )/(2*a);
return result;
}

float root2( int a,int b, int c)
{
float result;
result = (-b - sqrt(discriminant(a,b,c)) )/(2*a);
return result;
}
