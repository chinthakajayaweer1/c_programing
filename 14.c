#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,f=1,i;
printf("Enter a number:");
scanf("%d",&num);
if(num<0)
printf("Invalid number");
else
{
    for(i=1;i<=num;i++)
    {
        f=i*f;
    }
}
printf("Factorial of %d is %d",num,f);


    return 0;
}

