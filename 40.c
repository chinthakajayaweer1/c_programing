#include <stdio.h>
#include <stdlib.h>

int main()
{
int syr;
float rem,bsal;
char wplace;

printf("How many year do you service here:\n");
scanf("%d",&syr);

printf("Work place:\n");
scanf("%c",&wplace);

printf("Enter your month sales:\n");
scanf("%f",&bsal);

if(syr>5)
rem=bsal+bsal*0.1;
else
rem=bsal;

switch(wplace)
{


case 'C':rem=bsal+2500;break;
case 'c':rem=bsal+2500;break;
default:rem=bsal;
}

if(bsal<25000)
rem=bsal+bsal*0.1;
else if(bsal<50000)
rem=bsal+bsal*0.12;
else
rem=bsal+bsal*0.15;

printf("The gross monthly remuneration of salesman is %f",rem);


    return 0;
}
