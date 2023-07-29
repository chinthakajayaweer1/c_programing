#include <stdio.h>
#include <stdlib.h>

int main()
{
 int empno, count = 0, overtimepay, totalovertimepay = 0;
  float hours;
  float normalovertimerate = 150;
  float overtimerateinexcessof40 = 200;

  printf("Enter employee number (-999 to end): ");
  scanf("%d", &empno);

  while (empno != -999) {
    printf("Enter hours worked: ");
    scanf("%f", &hours);

    if (hours > 40) {
      overtimepay = (hours - 40) * overtimerateinexcessof40;
    } else {
      overtimepay = hours * normalovertimerate;
    }

    if (overtimepay > 4000) {
      count++;
      totalovertimepay += overtimepay;
    }

    printf("Employee number: %d\n", empno);
    printf("Overtime payment: %.2f\n", overtimepay);

    printf("Enter employee number (-999 to end): ");
    scanf("%d", &empno);
  }

  float percentage = (totalovertimepay / count) * 100;

  printf("Percentage of employees whose overtime payment exceeded Rs. 4000/-: %.2f%%\n", percentage);



    return 0;
}
