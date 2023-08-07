#include <stdio.h>
int main() {
  // Q1 Answer here
  int a = 1;
  while (a <= 5) {
    printf("\nMySirG\n");
    a++;
  }
  // Q2 Answer here
  int b = 1;
  printf("\nThe first 10 natural numbers are : \n");
  while (b <= 10) {
    printf("%d ", b);
    b++;
  }
  printf("\n");

  // Q3 Answer here
  int c = 10;
  printf("\nThe first 10 natural numbers in reverse order are : \n");
  while (c >= 1) {
    printf("%d ", c);
    c--;
  }
  printf("\n");

  // Q4 Answer here
  int d = 1;
  printf("\nThe first 10 odd natural numbers are : \n");
  while (d <= 19) {
    printf("%d ", d);
    d = d + 2;
  }
  printf("\n");

  // Q5 Answer here
  int e = 19;
  printf("\nThe first 10 odd natural numbers in reverse order are : \n");
  while (e >= 1) {
    printf("%d ", e);
    e = e - 2;
  }
  printf("\n");

  // Q6 Answer here
  int f = 2;
  printf("\nThe first 10 even natural numbers are : \n");
  while (f <= 20) {
    printf("%d ", f);
    f = f + 2;
  }
  printf("\n");

  // Q7 Answer here
  int g = 20;
  printf("\nThe first 10 even natural numbers in reverse order are : \n");
  while (g >= 2) {
    printf("%d ", g);
    g = g - 2;
  }
  printf("\n");

  // Q8 Answer here
  int h = 1, i;
  printf("\nThe squares of first 10 natural numbers are : \n");
  while (h <= 10) {
    i = h * h;
    printf("%d ", i);
    h++;
  }
  printf("\n");

  // Q9 Answer here
  int j = 1, k;
  printf("\nThe cubes of first 10 natural numbers are : \n");
  while (j <= 10) {
    k = j * j * j;
    printf("%d ", k);
    j++;
  }
  printf("\n");

  // Q10 Answer here
  int n = 5, m = 1, count, table;
  printf("Enter the number till where you want to print table of 5 : ");
  scanf("%d", &count);
  printf("\nThe table of 5 is given below : \n");
  while (m <= count) {
    table = n * a;
    printf("%d ", table);
    m++;
  }
  printf("\n");
  return 0;
}