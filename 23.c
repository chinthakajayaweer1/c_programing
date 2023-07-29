#include <stdio.h>
#include <stdlib.h>

int main()
{
int empno,count = 0;
  float bsalary;

  printf("Enter employee number (-999 to end): ");
  scanf("%d", &empno);

  while (empno!= -999) {
    printf("Enter basic salary: ");
    scanf("%f", &bsalary);

    if (bsalary >= 5000) {
      count++;
    }

    printf("Enter employee number (-999 to end): ");
    scanf("%d", &empno);
  }

  printf("Number of employees with basic salary >=5000 is: %d\n", count);


    return 0;
}
