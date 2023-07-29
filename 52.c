#include <stdio.h>
#include <stdlib.h>

int main()
{
int in;
float flo;
double dou;
char cha;
printf("Enter an integer value");
scanf("%d",&in);
printf("Enter a float value");
scanf("%f",&flo);
printf("Enter a double value");
scanf("%if",&dou);
printf("Enter a char value");
scanf("%c",&cha);
printf("\n In these values");
printf("\n integer :%d",in);
printf("\n float :%f",flo);
printf("\n double :%s",dou);
printf("\n char:%c",cha);

    return 0;
}
