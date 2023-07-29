#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  printf("Before swapping, a = %d and b = %d\n", a, b);

  // Swap the values of a and b
  int temp = a;
  a = b;
  b = temp;

  printf("After swapping, a = %d and b = %d\n", a, b);



    return 0;
}
