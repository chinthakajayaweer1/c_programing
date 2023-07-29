#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max,no1,no2;
    printf("Enter first numbers ");
    scanf("%d",&no1);
     printf("Enter second numbers ");
    scanf("%d",&no2);
    if(no1>no2)
    max=no1;
    else
    max=no2;
    printf("The highest number is %d",max);


    return 0;
}
