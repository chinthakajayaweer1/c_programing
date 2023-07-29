#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,base,exp,result=1;
printf("Enter the base:");
scanf("%d",&base);
printf("Enter the exponent:");
scanf("%d",&exp);

for(i=0;i<exp;i++)
{
    result*=base;
}

printf("The power =%d",result);

    return 0;
}

