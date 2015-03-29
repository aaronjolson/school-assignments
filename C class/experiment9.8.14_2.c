#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "Current local time and date: %s\n", asctime (timeinfo) );
  printf ("%s\n", asctime(timeinfo));
  printf(time);
  
  system("PAUSE");	
  return 0;
}
