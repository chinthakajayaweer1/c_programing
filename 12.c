#include <stdio.h>
#include <stdlib.h>

int main()
{
   int no,originalno,remainder,result=0;
    printf("Enter a three digits integer:");
    scanf("%d",&no);
    originalno=no;

    while(originalno!=0)
    {
        remainder=originalno%10;
        result+=remainder*remainder*remainder;
        originalno/=10;

    }
    if(result==no)
        printf("%d is an Armstrong number.",no);
    else
        printf("%d is not an Armstrong number.",no);


    return 0;
}

