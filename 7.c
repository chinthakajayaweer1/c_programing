#include <stdio.h>
#include <stdlib.h>

int main()
{
int size;
  printf("Enter the size of the arrays: ");
  scanf("%d", &size);


  int arr1[size];
  int arr2[size];

  printf("Enter the values of array 1: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr1[i]);
  }

  printf("Enter the values of array 2: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr2[i]);
  }

  int scalarsum = 0;
  for (int i = 0; i < size; i++) {
    scalarsum += arr1[i] + arr2[i];
  }


  printf("The scalar sum is: %d\n", scalarsum);

    return 0;
}



















#include <stdio.h>
#include <stdlib.h>

int main()
{

  int size;
  printf("Enter the size of the arrays: ");
  scanf("%d", &size);


  int arr1[size];
  int arr2[size];
  int arr3[size];


  printf("Enter the values of array 1: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr1[i]);
  }

  printf("Enter the values of array 2: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr2[i]);
  }


  for (int i = 0; i < size; i++) {
    arr3[i] = arr1[i] + arr2[i];
  }


  printf("The vector sum is: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr3[i]);
  }
  printf("\n");

  return 0;
}
