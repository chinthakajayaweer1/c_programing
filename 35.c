#include <stdio.h>
#include <stdlib.h>

int main()
{
int ans,integer;
printf("Enter an integer ");
scanf("%d",&integer);
ans=integer%2;
if(ans==0)
    printf("%d is even",integer);
else
    printf("%d is odd",integer);


    return 0;
}
