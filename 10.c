#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,reversedn=0,digit;
printf("Enter a number");
scanf("%d",&n);
do
{
    digit=n%10;
    reversedn=reversedn*10+digit;
    n/=10;
}while(n!=0);
printf("Reversed number:%d\n",reversedn);

    return 0;
}

