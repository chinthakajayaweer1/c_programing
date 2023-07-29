#include <stdio.h>
#include <stdlib.h>

int main()
{
int no1,no2,ans;
printf("Enter the first integer ");
scanf("%d",&no1);
printf("Enter the second integer ");
scanf("%d",&no2);
ans=no1%no2;
if(ans==0)
printf("%d is a multiple of  %d\n",no1,no2);
else
printf(" %d is not a multiple of  %d",no1,no2);





    return 0;
}
