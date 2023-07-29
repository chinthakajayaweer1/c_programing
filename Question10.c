#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,y,rows;
printf("Enter the number of rows:");
scanf("%d",&rows);
for(x=1;x<=rows;x++)
{
    for(y=1;y<=x;y++)
    {
        printf("*");
    }
    printf("\n");
}

    return 0;
}
