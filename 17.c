#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=1,ave,pc,sum=0;
      while(counter<=10)
      {
    printf("Enter %d price:",counter);
    scanf("%d",&pc);




    if(pc>200)
     pc++;

        sum=sum+pc;
     counter++;
      }
      ave=pc/10;

    printf("%d number of items which the price is greater than 200",pc);
    printf("The average is %d\n",ave);



    return 0;
}
