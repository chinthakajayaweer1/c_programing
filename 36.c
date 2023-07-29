#include <stdio.h>
#include <stdlib.h>

int main()
{
int choice;
float ans,no1,no2;
printf("Enter your choice\n");
printf("1) addition\n");
printf("2) subtraction\n");
printf("3) devision\n");
printf("4) multiplication\n");
scanf("%d",&choice);
printf("Enter two numbers\n");
scanf("%f %f",&no1,&no2);

switch(choice)
{

case 1 : ans=no1+no2;printf("Result :%.2f",ans);break;
case 2 : ans=no1-no2;printf("Result :%.2f",ans);break;
case 3 : ans=no1/no2;printf("Result :%.2f",ans);break;
case 4 : ans=no1*no2;printf("Result :%.2f",ans);break;
default: printf(" It is not a valid choice");
}



    return 0;
}
