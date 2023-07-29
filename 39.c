#include <stdio.h>
#include <stdlib.h>

int main()
{
int no1,no2,no3,largest,smallest;
printf("Enter three numbers\n");
scanf("%d%d%d",&no1,&no2,&no3);
 if(no1>no2&&no1>no3)
    largest=no1;

else if (no2>no1&&no2>no3)
    largest=no2;
else
    largest=no3;
 if(no1>no2&&no2>no3)
    smallest=no3;

else if (no2>no1&&no3>no1)
    smallest=no1;
else
    smallest=no2;
printf("The largest value is %d\n",largest);
printf("The smallest value is %d",smallest);



    return 0;
}
