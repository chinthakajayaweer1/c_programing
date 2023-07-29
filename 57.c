#include <stdio.h>
#include <stdlib.h>

int main()
{
int cyear,byear,age;
char name [10];
printf("Enter student name ");
scanf("%s",&name);
printf("Enter current year ");
scanf("%d",&cyear);

printf("Enter birth year ");
scanf("%d",&byear);
age=(cyear-byear);
printf("%s, you are %d years old\n",name,age);


    return 0;
}
