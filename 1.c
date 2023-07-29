#include <stdio.h>
#include <stdlib.h>

int main()
{
 int matrix1[3][3];
  int matrix2[3][3];
  int matrix_sum[3][3];

  printf("Enter the values of matrix 1: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("Enter the values of matrix 2: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }


  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }


  printf("The matrix sum is: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix_sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}
