#include <stdio.h>
int main() {

  // Q1 Answer here
  int n, a = 1;
  printf("Enter the number of times for printing MySirG : ");
  scanf("%d", &n);
  while (a <= n) {
    printf("\nMySirG\n");
    a++;
  }

  // Q2 Answer here
  int c, b = 1;
  printf(
      "\nEnter the number till where you want to print natural numbers : \n");
  scanf("%d", &c);
  printf("\nThe first %d natural numbers are : \n", c);
  while (b <= c) {
    printf("%d ", b);
    b++;
  }
  printf("\n");

  // Q3 Answer here
  int d;
  printf("\nEnter the number till where you want to print natural numbers in "
         "reverse order : \n");
  scanf("%d", &d);
  printf("\nThe first %d natural numbers in reverse order are : \n", d);
  while (d >= 1) {
    printf("%d ", d);
    d--;
  }
  printf("\n");

  // Q4 Answer here
  int e = 2, f;
  printf("\nEnter the number till where you want to print even natural numbers "
         ": ");
  scanf("%d", &f);
  printf("\nThe first %d even natural numbers are : \n", f);
  while (e <= (2 * f)) {
    printf("%d ", e);
    e = e + 2;
  }
  printf("\n");

  // Q5 Answer here
  int g;
  printf("\nEnter the number till where you want to print odd natural numbers "
         "in reverse order : ");
  scanf("%d", &g);
  printf("\nThe first %d odd natural numbers in reverse order are : \n", n);
  while ((2 * g - 1) >= 1) {
    printf("%d ", (2 * g - 1));
    g = g - 1;
  }
  printf("\n");

  // Q6 Answer here
  int h = 2, i;
  printf("\nEnter the number till where you want to print even natural numbers "
         ": ");
  scanf("%d", &i);
  printf("\nThe first %d even natural numbers are : \n", i);
  while (h <= (2 * i)) {
    printf("%d ", h);
    h = h + 2;
  }
  printf("\n");

  // Q7 Answer here
  int j;
  printf("\nEnter the number till where you want to print even natural numbers "
         "in reverse order : ");
  scanf("%d", &j);
  printf("\nThe first %d even natural numbers in reverse order are : \n", j);
  while ((2 * j) >= 1) {
    printf("%d ", 2 * j);
    j = j - 1;
  }
  printf("\n");

  // Q8 Answer here
  int no, k = 1, m;
  printf("Enter the number till where you want to print squares of natural "
         "numbers : ");
  scanf("%d", &no);
  printf("\nThe squares of first %d natural numbers are : \n", no);
  while (k <= no) {
    m = k * k;
    printf("%d ", m);
    k++;
  }
  printf("\n");

  // Q9 Answer here
  int count, a1 = 1, b1;
  printf("Enter the number till where you want to print cubes of natural "
         "numbers : ");
  scanf("%d", &count);
  printf("\nThe cubes of first %d natural numbers are : \n", count);
  while (a1 <= count) {
    b1 = a1 * a1 * a1;
    printf("%d ", b1);
    a1++;
  }
  printf("\n");

  // Q10 Answer here
  int num, a2 = 1, count1, table;
  printf("Enter the number for table : ");
  scanf("%d", &num);
  printf("Enter the number till where you want to print table of %d : ", num);
  scanf("%d", &count1);
  printf("\nThe table of %d is given below : \n", num);
  while (a2 <= count1) {
    table = num * a2;
    printf("%d ", table);
    a2++;
  }
  printf("\n");
  return 0;
}