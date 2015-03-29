#include <stdio.h>
#include <stdlib.h>

#define SN 17850
#define HH 23900
#define MJ 29750 
#define MS 14875

/*
Aaron Olson
Sec 20

this program displays a menu, asks the user to enter a number corresponding to their tax category,
then asks them to enter their yearly income and then computes taxes owed on that income.
*/

int main()
{
  int run = 2;
  float taxC;
  int tax;
  float income;
  float taxes;
  int first;
  int second;
  float net;
  
 
while (run > 1){ //This keeps the program restarting until the user inputs 5
  // This prints out the menu and then takes the user input
  printf("*****************************************************************\n");
  printf("Enter the number corresponding to your tax category:\n");
  printf("1) Single\n");
  printf("2) Head of Household\n");
  printf("3) Married, Joint\n");
  printf("4) Married, Separate\n");
  printf("5) quit\n");
  printf("*****************************************************************\n");  
  scanf("%d", &tax);
  
  switch (tax) // switch statement to handle user input
  {case 1:
        taxC = SN;
        break;
   case 2:
        taxC = HH;
        break;
   case 3:
        taxC = MJ;
        break;
   case 4:
        taxC = MS;
        break;
   case 5:
        return 0;
   default:
         printf("Please enter one of the given choices\n");
         run = 0;
		 break;   
         }
// write all of this in an if statement and then if run 0, don't run this and restart.
  printf("Please enter your income for this fical year:\n");
  scanf("%f", &income);
  
  if (income > taxC){
  	first = (taxC * .85);
  	second = (income - first) * .72;
  	net  = first + second;
  	taxes = income - net;
  }
  else{
    first = (taxC * .85);
    net  = first;
    taxes = income - net;
  }
  
  printf("Your income is %.2f\n", income);
  printf("Your taxes are %.2f\n", taxes);
  printf("After taxes your net income is %.2f\n", net);
 
  
  }   
  system("PAUSE");	
  return 0;
}
