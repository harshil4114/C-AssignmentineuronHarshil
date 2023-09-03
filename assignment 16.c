#include <stdio.h>
int main() {
  // Q1 Answer here
  int a[3][3], b[3][3], sum[3][3], i, j;
  printf("Enter the elements of first matrix :\n");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);

  printf("\nEnter the elements of second matrix :\n");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &b[i][j]);

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      sum[i][j] = a[i][j] + b[i][j];

  printf("\nSum of two matrix is :\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%2d ", sum[i][j]);
    }
    printf("\n");
  }
  // Q2 Answer here
  int matrixA[3][3], matrixB[3][3], product[3][3], i, j;

  printf("Enter the elements of the first matrix:\n");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &matrixA[i][j]);

  printf("\nEnter the elements of the second matrix:\n");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &matrixB[i][j]);

  printf("\nProduct of the two matrices is:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      product[i][j] = matrixA[i][0] * matrixB[0][j] +
                      matrixA[i][1] * matrixB[1][j] +
                      matrixA[i][2] * matrixB[2][j];
      printf("%2d ", product[i][j]);
    }
    printf("\n");
  }
  // Q3 Answer here
  {
    int a[100][100], b[100][100], i, j, n1, n2;
    printf("Enter number of rows of matrix : ");
    scanf("%d", &n1);
    printf("\nEnter number of columns of matrix : ");
    scanf("%d", &n2);
    printf("\nEnter the elements of matrix :\n");
    for (i = 0; i < n1; i++)
      for (j = 0; j < n2; j++)
        scanf("%d", &a[i][j]);
    // transpose of matrix
    printf("\ntranspose of matrix is :\n");
    for (i = 0; i < n2; i++) {
      for (j = 0; j < n1; j++) {
        b[i][j] = a[j][i];
        printf("%2d ", b[i][j]);
      }
      printf("\n");
    }
  }
  // Q4 Answer here
  int matrix[100][100], x, y, n, sum1 = 0;

  printf("Enter the size of the square matrix: ");
  scanf("%d", &n);

  printf("\nEnter the elements of the square matrix:\n");
  for (x = n - 1; x >= 0; x--)
    for (y = n - 1; y >= 0; y--)
      scanf("%d", &matrix[x][y]);

  for (x = 0; x < n; x++) {
    for (y = 0; y < n; y++) {
      if (x == y)
        sum = sum + matrix[x][y];
    }
  }

  printf("\nThe sum of right diagonal elements of the matrix is %d", sum1);

  // Q5 Answer here
  int mat[100][100];
  int d, sums = 0;

  printf("Enter the size of the square matrix: ");
  scanf("%d", &d);

  printf("\nEnter the elements of the square matrix:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  // Calculate the sum of left diagonal elements
  for (int i = 0; i < n; i++) {
    sums = +mat[i][i];
  }

  printf("The sum of left diagonal elements of the matrix is %d\n", sums);
}

// Q6 Answer here

{
  int rows, cols;

  // Input the number of rows and columns
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  // Declare a matrix of the given dimensions
  int matrix[rows][cols];

  // Input the elements of the matrix
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Calculate and print the sum of rows
  printf("Sum of rows:\n");
  for (int i = 0; i < rows; i++) {
    int rowSum = 0;
    for (int j = 0; j < cols; j++) {
      rowSum += matrix[i][j];
    }
    printf("Row %d: %d\n", i + 1, rowSum);
  }

  // Calculate and print the sum of columns
  printf("Sum of columns:\n");
  for (int j = 0; j < cols; j++) {
    int colSum = 0;
    for (int i = 0; i < rows; i++) {
      colSum += matrix[i][j];
    }
    printf("Column %d: %d\n", j + 1, colSum);
  }

  // Q7 Answer here

  int rows, cols;

  // Input the number of rows and columns
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  // Declare a matrix of the given dimensions
  int matrix[rows][cols];

  // Input the elements of the matrix
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Calculate and print the sum of rows
  printf("Sum of rows:\n");
  for (int row = 0; row < rows; row++) {
    int rowSum = 0;
    for (int col = 0; col < cols; col++) {
      rowSum += matrix[row][col];
    }
    printf("Row %d: %d\n", row + 1, rowSum);
  }

  // Calculate and print the sum of columns
  printf("Sum of columns:\n");
  for (int col = 0; col < cols; col++) {
    int colSum = 0;
    for (int row = 0; row < rows; row++) {
      colSum += matrix[row][col];
    }
    printf("Column %d: %d\n", col + 1, colSum);
  }

  // Q8 Answer here
  int rowmatrix, columnmatrix;

  printf("Enter the number of rows and columns for the matrix: ");
  scanf("%d %d", &rowmatrix, &columnmatrix);

  if (rowmatrix != columnmatrix) {
    printf("The matrix must be square (equal number of rows and columns).\n");
    return 1;
  }

  int matrix[rowmatrix][columnmatrix];

  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < rowmatrix; i++) {
    for (int j = 0; j < columnmatrix; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Upper Triangular Matrix:\n");
  for (int i = 0; i < rowmatrix; i++) {
    for (int j = 0; j < columnmatrix; j++) {
      if (j >= i) {
        printf("%d\t", matrix[i][j]);
      } else {
        printf("0\t");
      }
    }
    printf("\n");
  }

  // Q9 Answer here
  int num_rows, num_cols, sparsity_threshold;

  printf("Enter the number of rows and columns for the matrix: ");
  scanf("%d %d", &num_rows, &num_cols);

  printf("Enter the threshold for sparsity: ");
  scanf("%d", &sparsity_threshold);

  int matrix[num_rows][num_cols];

  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < num_rows; i++) {
    for (int j = 0; j < num_cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  int zero_count = 0;
  for (int i = 0; i < num_rows; i++) {
    for (int j = 0; j < num_cols; j++) {
      if (matrix[i][j] == 0) {
        zero_count++;
      }
    }
  }

  if (zero_count > sparsity_threshold) {
    printf("The matrix is sparse.\n");
  } else {
    printf("The matrix is not sparse.\n");
  }

  // Q10 Answer here
  int matrix[1000][1000], i, j, num_rows, num_cols, count, max_row = 0,
                                                           total_ones = 0;

  printf("Enter the number of rows for the matrix: ");
  scanf("%d", &num_rows);
  printf("Enter the number of columns for the matrix: ");
  scanf("%d", &num_cols);

  printf("\nEnter the elements of the matrix:\n");
  for (i = 0; i < num_rows; i++) {
    for (j = 0; j < num_cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  for (i = 0; i < num_rows; i++) {
    count = 0;
    for (j = 0; j < num_cols; j++) {
      if (matrix[i][j] == 1)
        count++;
    }
    if (count > total_ones) {
      max_row = i + 1;
      total_ones = count;
    }
  }
  if (max_row == 0)
    printf("\nNumber 1 is not present in the matrix.\n");
  else
    printf("\nRow with the maximum number of 1s is row number %d.\n", max_row);
