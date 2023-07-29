#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,c=0;
printf("Enter a number n:");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
    if(n%i==0)
    {
        c=c+1;
    }

}
    if(c==2)

        printf("n is a primary number");
    else
        printf("n is not a primary number");


    return 0;
}
