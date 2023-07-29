#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
printf("Enter month number:");
scanf("%d",&num);

switch(num)
{

case 1 :
case 3 :
case 5 :
case 7 :
case 8 :
case 10:
case 12:
    printf("This month has 31 days");break;
case 2: printf("This month has 28 days");break;
case 4:
case 6:
case 9:
    printf("This month has 30 days");break;



default: printf("It is not a valid month number");
}

    return 0;
}
