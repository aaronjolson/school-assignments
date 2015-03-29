#include <stdio.h>
#include <stdlib.h>

struct xampl {
  int x;
};

struct database {
  int id_number;
  int age;
  float salary;
};

int main()
{  
    struct xampl structure;
    struct xampl *ptr;

    structure.x = 12;
    ptr = &structure; /* Yes, you need the & when dealing with 
                           structures and using pointers to them*/
    printf( "%d\n", ptr->x );  /* The -> acts somewhat like the * when 
                                   does when it is used with pointers
                                    It says, get whatever is at that memory
                                   address Not "get what that memory address
                                   is"*/
    getchar();
  
//=====================================================================================  
    
    
    struct database employee;  /* There is now an employee variable that has
                              modifiable variables inside it.*/
    employee.age = 22;
    employee.id_number = 1;
    employee.salary = 12000.21;
    
    printf("%d" , employee.age);
  
  system("PAUSE");	
  return 0;
}
