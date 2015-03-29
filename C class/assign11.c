/*
Aaron Olson
Sec 20

Program that reads in up to 10 strings or to EOF, whichever comes first. 
It offers the user a menu with five choices: print the original list of strings, 
print the strings in ASCII collating sequence, print the strings in order of 
increasing length, print the strings in order of the length of the first word in the 
string, and quit. The menu recycles until the user enters the quit request. The 
program, of course, actually performs the promised tasks.
*/ 

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 200 /* string length limit, including \0 */
#define LIM 5 /* maximum number of lines to be read */
#define HALT "" /* null string to stop input */
void stsrt(char *strings[], int num, int mode);/* string-sort function */
int main(void)
{
 char input[LIM][SIZE]; /* array to store input */
 char *ptstr[LIM]; /* array of pointer variables */
 int ct = 0; /* input count */
 int k; /* output count */
 int mode = 0;
 int run = 2;
 int sort;
 printf("Input up to %d lines, and I will sort them.\n",LIM);
 printf("To stop, press the Enter key at a line's start.\n");
 while (ct < LIM && gets(input[ct]) != NULL
 && input[ct][0] != '\0')
 {
 ptstr[ct] = input[ct]; /* set ptrs to strings */
 ct++;
 }
 
  while (run >= 1){ //This keeps the program restarting until the user inputs 5
  // This prints out the menu and then takes the user input
  printf("*****************************************************************\n");
  printf("Enter the number corresponding to how to sort the strings:\n");        
  printf("1) Print the original list of strings\n");
  printf("2) Print the strings in ASCII collating sequence\n");
  printf("3) Print the strings in order of increasing length\n");
  printf("4) Print the strings in order of the length of the first word\n");
  printf("5) quit\n");
  printf("*****************************************************************\n");  
  scanf("%d", &sort);
  
  switch (sort){ // switch statement to handle user input
  case 1:
        puts("\nHere's the original list:\n");
          for (k = 0; k < ct; k++)
            puts(input[k]); /* sorted pointers */
        break;
   case 2:
        mode = 2;
   	    stsrt(ptstr, ct, mode);
        puts("\nHere's the strings in ASCII collating sequence:\n");
          for (k = 0; k < ct; k++)
            puts(ptstr[k]); /* sorted pointers */
        break;
   case 3:
   	    mode = 3;
   	    stsrt(ptstr, ct, mode);
        puts("\nHere's the strings in order of increasing lengths:\n");
          for (k = 0; k < ct; k++)
            puts(ptstr[k]); /* sorted pointers */
        break;
   case 4:
   	    mode = 4;
   	    stsrt(ptstr, ct, mode);
        puts("\nHere's the strings in order of the length of the first word:\n");
          for (k = 0; k < ct; k++)
            puts(ptstr[k]); /* sorted pointers */
        break;
   case 5:
        return 0;
   default:
         printf("Please enter one of the given choices\n");
         run = 0;
		 break;   
         }
        }
 return 0;
}
/* string-pointer-sorting function */
void stsrt(char *strings[], int num, int mode)
{
	
 char *temp;
 int top, seek;
 for (top = 0; top < num-1; top++)
 for (seek = top + 1; seek < num; seek++)
 if ((strcmp(strings[top],strings[seek]) > 0) && mode == 2)
   {
 temp = strings[top];
 strings[top] = strings[seek];
 strings[seek] = temp;
   }
 else if(strlen(strings[top]) > strlen(strings[seek]) && mode == 3)
   {
 temp = strings[top];
 strings[top] = strings[seek];
 strings[seek] = temp;
   }
 else if (mode == 4)
   {
   	if( temp != "\n")
   	{
   	temp = strings[top];
    strings[top] = strings[seek];
    strings[seek] = temp;
    }
   }
}
