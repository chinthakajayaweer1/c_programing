#include <stdio.h>
#include <stdlib.h>

int main()
{
float bsal,nsal;
char name[20];
printf("Enter your name\n");
scanf("%s",&name);
printf("Enter your basic salary\n");
scanf("%f",&bsal);
if(bsal<5000)
    nsal=bsal+bsal*0.05;
else if(bsal<=10000)
    nsal=bsal+bsal*0.1;
else
nsal=bsal+bsal*0.15;
printf("Your new salary is %.2f",nsal);



    return 0;
}
