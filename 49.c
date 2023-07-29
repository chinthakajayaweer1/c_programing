#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dis,time,ave;
   printf("Distance traveled(meters)? ");
   scanf("%d",&dis);
   printf("Taken time(seconds)? ");
   scanf("%d",&time);
   ave=(dis)/(time);
   printf("Average speed is %d meters per second\n",ave);




    return 0;
}
