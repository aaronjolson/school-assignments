#include <stdio.h>
#include <string.h>

int main()
{
    char name [81] = "Aaron Olson";
    printf ("Your name is: %s \n", name);
    
    strcpy (name, "asjkajksajkghias");
     printf ("Your name is: %s \n", name);
     
     printf("enter a name: ");
     gets(name);
     printf ("Your name is: %s \n", name);
 
 system("pause");
 return 0;
    
}
