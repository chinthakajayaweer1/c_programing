#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arr[10];


  for (int i = 0; i < 10; i++) {
    printf("Enter the value of element %d: ", i);
    scanf("%d", &arr[i]);
  }


  int max = arr[0];


  for (int i = 1; i < 10; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }


  printf("The maximum value in the array is: %d\n", max);

    return 0;
}
