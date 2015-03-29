/*
Aaron Olson
Sec 20

This program plays a digital game of craps. It asks the user to press 'r' to start a game. 
It takes the system clock to seed random values. It takes the randomly seeded values 
to generate random rolls of the dice. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void craps();

int main(void)
{
char input,seed;
do{
 printf("\n");
 printf("Play a game of craps! Press r to roll the dice or any other key to quit.\n");
 input=getchar();
 seed=getchar();
 if(input=='r')
  craps();}
while(input=='r');
system("pause");
return 0;
}

void craps()
{
int random_num(int a, int b);
srand(time(NULL));
int die_1,die_2,die_3,die_4,roll,roll_2;
die_1=random_num(1,6);
die_2= random_num(1,6);
roll= die_1 + die_2;
printf("Rolled a %i\n",roll);
if(roll==7 || roll==11){
 printf("You Win!\n");
return;
}
else if(roll==2 || roll==3 || roll==12){
 printf("You Lose\n");
return;
}
else{
do{
 die_3=random_num(1,6);
 die_4=random_num(1,6);
 roll_2=die_3 + die_4;
 printf("Rolled a %i\n",roll_2);
if(roll_2==roll){
 printf("You Win");
return;
 }
}
while(roll_2 != 7);
printf("You Lose");
 }
}
int random_num(int a, int b)
{
return rand()%(b-a+1)+a;
}
