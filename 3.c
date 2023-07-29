#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[10];


  for (int i = 0; i < 10; i++) {
    printf("Enter the value of element %d: ", i);
    scanf("%d", &arr[i]);
  }


  int sum = 0;


  for (int i = 0; i < 10; i++) {
    sum += arr[i];
  }


  float average = sum / 10.0;


  printf("The average value in the array is: %.2f\n", average);


    return 0;
}
