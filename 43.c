#include <stdio.h>
#include <stdlib.h>

int main()
{
float rad,pie=3.14159,dia,cir,area;
printf("Enter the circle's radious ");
scanf("%f",&rad);
dia=2*rad;
cir=2*pie*rad;
area=4*pie*rad*rad;
printf("The diameter of the circle is %f\n",dia);
printf("The circumference of the circle is %f\n",cir);
printf("The area of the circle is %f",area);




    return 0;
}
