#include <stdio.h>
#include <stdlib.h>

#define A 8.75
#define B 9.33
#define C 10.00
#define D 11.20
#define t1 .85
#define t2 .80
#define t3 .75

/*
Aaron Olson
Sec 20

this program displays a menu, asks the user to enter a number corresponding to their hourly wage,
then asks them to enter their weekly hours and then computes taxes owed and net income.
*/

int main()
{
  int run = 2;
  float payR = 1;
  int pay = 0;
  float hours;
  float taxes;
  float gross;
  float net;
  
 
while (run > 1){ //This keeps the program restarting until the user inputs 5
  // This prints out the menu and then takes the user input
  printf("*****************************************************************\n");
  printf("Enter the number corresponding to the desired pay rate or action:\n");
  printf("1) $8.75/hr                            2) $9.33/hr\n");
  printf("3) $10.00/hr                           4) $11.20/hr\n");
  printf("5) quit\n");
  printf("*****************************************************************\n");  
  scanf("%d", &pay);
  
  switch (pay) // swtich statement to handle user input
  {case 1:
        payR = A;
        break;
   case 2:
        payR = B;
        break;
   case 3:
        payR = C;
        break;
   case 4:
        payR = D;
        break;
   case 5:
        return 0;
   default:
         printf("Please enter one of the given choices\n");
         run = 0;
		 break;     
         }

  printf("Please enter how many hours have you worked this week:\n");
  scanf("%f", &hours);
  
  if (hours > 40){
  	gross = (hours - 40) * (payR * 1.5) + (payR * 40);
  }
  else{
    gross = (payR * hours);
  }
  
  if (gross > 450){
    net = (gross - 75) * t3;
  }
  if (gross <= 450 && gross >= 300){
  	net = (gross - 45) * t2;
  }
  else{
  	net = gross * t1; 
  }
  taxes = gross - net;
  
  printf("Your gross pay is %.2f\n", gross);
  printf("Your taxes are %.2f\n", taxes);
  printf("After taxes your net pay is %.2f\n", net);
 
  
  }   
  system("PAUSE");	
  return 0;
}
