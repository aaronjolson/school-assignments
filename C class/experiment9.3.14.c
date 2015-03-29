#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *agrv)
{
    
    printf("Hi \n");
    
    
    int a = strlen("sdrhjsdfmkzsh \n");
    printf("%d \n",a);
    
    char str1[20] = "Shuper";
    strcat(str1, " shweet\n");
    printf("%s", str1);
    
    
    char str2[] = "garden";

    if (strcmp(str2, "apple") == 0)
        cout << "Equal" << endl;
    else 
        cout << "Not equal" << endl;
    
    
  system("pause");
  return(0);    
}
