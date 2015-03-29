#include <stdio.h>
#include <stdlib.h>

/*
Aaron Olson
Sec 20
8.28.14

This program reads in a stream of coordinate data
and computes the distance and direction traveled in total and per move.  */

int main(int argc, char *argv[])
{
//variable declaration field
  int pair[2] = {0,0};
  int lastPair[2] = {0,0};
  int currentPoint[2] = {0,0};
  int xDir = pair[0];
  int yDir = pair[1];
  int dist = 0;
  char* dir = "no movement";
  int moves = 0;
  int streamLength = 6;
  int total = 0;
  double start2Finish = 0;

// this function handles each new coordinate entry
int move()
{
 scanf("%d %d", &pair[0], &pair[1]);



//This section calculates move direction 
 if(pair[0] > currentPoint[0] && pair[0] != 0 )
 { dir = "right"; }
 if(pair[0] < currentPoint[0] && pair[0] != 0)
 { dir = "left"; }
 if(pair[1] < currentPoint[1] && pair[1] != 0)
 { dir = "down"; }
 if(pair[1] > currentPoint[1] && pair[1] != 0)
 { dir = "up"; }
 
 xDir += pair[0];
 yDir += pair[1];
 
 
 dist = pair[0] + pair[1];
 total += dist;
 moves++;
 lastPair[0] =  pair[0];
 lastPair[1] =  pair[1];
 currentPoint[0] += pair[0];
 currentPoint[1] += pair[1];
}

while (moves <= streamLength)
{
 {
  if (moves == 0)
  {
     printf("%d %d <-Start\n",xDir, yDir);  
  }
  if (moves > 0)
  {          
      char* x = printf("%d %d <- Distance: %d Direction: %s\n",pair[0], pair[1], dist, dir);
  }
  if (moves == streamLength)
  {
      printf("Total distance between successive points: %d\n", total);
      printf("Distance between start and finish: %lf\n",start2Finish); 
            }
 } 
  move();
  //printf("%d %d\n",xDir, yDir);
} 
  system("PAUSE");	
  return 0;
}
