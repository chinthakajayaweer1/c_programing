#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1=0,n2=1,next;
int i;
printf("Fibonacci Sequence:%d %d",n1,n2);

for(i=3;i<=10;i++)
{
    next=n1+n2;
    printf(" %d",next);
    n1=n2;
    n2=next;
}
printf("\n");

    return 0;
}

