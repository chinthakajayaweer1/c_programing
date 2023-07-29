#include <stdio.h>
#include <stdlib.h>

int main()
{
  int F,C;
printf("Temperature in Fahrenheit?");
scanf("%d",&F);
C=((F-32)*5)/9;
printf("Temperature in Celsius is %d",C);

    return 0;
}
