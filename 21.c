#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,arr[10];
for(i=0;i<10;i++)
{
    printf("Enter the %d integers:",i+1);
    scanf("%d",&arr[i]);

}
for(i=0;i<10;i++)
printf("%d",arr[i]);


    return 0;
}
