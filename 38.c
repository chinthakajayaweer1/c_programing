#include <stdio.h>
#include <stdlib.h>

int main()
{
int choice;
float ans,pie=3.14,radius;
printf("Enter your choice\n");
printf("1) circumference of a circle\n");
printf("2) area of a circle\n");
printf("3) volume of a sphere\n");

scanf("%d",&choice);

printf("Enter the radius:");
scanf("%f",&radius);

switch(choice)
{

case 1 : ans=2*pie*radius;printf("Result :%.2f",ans);break;
case 2 : ans=4*pie*radius*radius;printf("Result :%.2f",ans);break;
case 3 : ans=4/3*pie*radius*radius*radius;printf("Result :%.2f",ans);break;
default: printf(" It is not a valid choice");
}


    return 0;
}
