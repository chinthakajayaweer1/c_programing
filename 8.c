#include <stdio.h>
#include <stdlib.h>

int main()
{
int counter=1;
float ave,total=0,mark;
while(counter<=10)
{
 printf("Enter mark %d:",counter);
 scanf("%d",&mark);
 total=total+mark;

 counter++;
}
ave=total/10;
 printf("Total mark is %d\n",total);
printf("The average is %.2f\n",ave);
if(ave<50)
    printf("fail");
else
    printf("pass");


    return 0;
}

