#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=1,mark,max,min,ave,sum=0;
      while(counter<=10)
      {
    printf("Enter %d mark",counter);
    scanf("%d",&mark);
    if(mark>max)
     max=mark;

     if(mark<min)
        min=mark;

        sum=sum+mark;
     counter++;
      }
      ave=sum/10;

    printf("Maximum number is d\n",max);
    printf("Minimum number is %d\n",min);
    printf("The average is %d\n",ave);



    return 0;
}
