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
  int startPoint[2] = {0,0};
  int pair[2] = {0,0};
  int currentPoint[2] = {0,0};
  int dist = 0;
  char* dir = "No Movement";
  int moves = 0;
  int streamLength = 4;
  int total = 0;
  double start2Finish = 0;

// this function handles each new coordinate entry
int move()
{
 scanf("%d %d", &pair[0], &pair[1]);
 dist = 0;

//This section calculates move direction 
 if(pair[0] > currentPoint[0] && pair[0] != currentPoint[0])
 { dir = "Right";
   dist = pair[0] - currentPoint[0];
   currentPoint[0] += pair[0];
 }
 if(pair[0] < currentPoint[0] && pair[0] != currentPoint[0])
 { dir = "Left";
   dist = pair[0] - currentPoint[0];
   currentPoint[0] = (currentPoint[0] - abs(dist));
  }
 if(pair[1] > currentPoint[1] && pair[1] != currentPoint[1])
 { dir = "Up";
   dist = pair[1] - currentPoint[1];
   currentPoint[1] += pair[1];
 }
 if(pair[1] < currentPoint[1] && pair[1] != currentPoint[1])
 { dir = "Down"; 
   dist = pair[1] - currentPoint[1];
   currentPoint[1] = (currentPoint[1] - abs(dist));
 } 
 
 total += abs(dist);
 moves++;
}

while (moves <= streamLength)
{
 {
  if (moves == 0)
  {
     printf("%d %d <-Start\n",startPoint[0], startPoint[1]);  
  }
  if (moves > 0)
  {          
      printf("%d %d <- Distance: %d Direction: %s\n",currentPoint[0], currentPoint[1], abs(dist), dir);
  }
  if (moves == streamLength)
  {
      printf("%d %d <- Finish\n", currentPoint[0], currentPoint[1]);
      printf("Total distance between successive points: %d\n", total);
      start2Finish = sqrt((pow((currentPoint[0]- startPoint[0]), 2))+(pow((currentPoint[1]- startPoint[1]), 2)));
      printf("Distance between start and finish: %lf\n",start2Finish);
      }
  } 
  move();
} 
  system("PAUSE");	
  return 0;
}
