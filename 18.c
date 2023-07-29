#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,in;
printf("Enter a integer:");
scanf("%d",&in);
printf("Factors of the integer are\n");
for(i=1;i<=in;i++)
{
    if(in%i==0)
    printf("%d\n",i);
}



    return 0;
}
