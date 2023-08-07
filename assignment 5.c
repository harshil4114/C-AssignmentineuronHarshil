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
  int e;
  printf("Enter the number till where you want to print odd natural numbers in "
         "reverse order : ");
  scanf("%d", &e);
  printf("\nThe first %d odd natural numbers in reverse order are : \n", n);
  while ((2 * e - 1) >= 1) {
    printf("%d ", (2 * e - 1));
    e = e - 1;
  }
  printf("\n");

  // Q5 Answer here
  int f;
  printf("Enter the number till where you want to print odd natural numbers in "
         "reverse order : ");
  scanf("%d", &f);
  printf("\nThe first %d odd natural numbers in reverse order are : \n", f);
  while ((2 * f - 1) >= 1) {
    printf("%d ", (2 * f - 1));
    f = f - 1;
  }
  printf("\n");

  // Q6 Answer here
  int g = 2, h;
  printf(
      "Enter the number till where you want to print even natural numbers : ");
  scanf("%d", &h);
  printf("\nThe first %d even natural numbers are : \n", h);
  while (g <= (2 * h)) {
    printf("%d ", g);
    g = g + 2;
  }
  printf("\n");

  // Q7 Answer here
  int i;
  printf("Enter the number till where you want to print even natural numbers "
         "in reverse order : ");
  scanf("%d", &i);
  printf("\nThe first %d even natural numbers in reverse order are : \n", i);
  while ((2 * i) >= 1) {
    printf("%d ", 2 * i);
    i = i - 1;
  }
  printf("\n");

  // Q8 Answer here
  int j, k = 1, l;
  printf("Enter the number till where you want to print squares of natural "
         "numbers : ");
  scanf("%d", &j);
  printf("\nThe squares of first %d natural numbers are : \n", j);
  while (k <= j) {
    l = k * k;
    printf("%d ", b);
    k++;
  }
  printf("\n");

  // Q9 Answer here
  int m, o = 1, p;
  printf("Enter the number till where you want to print cubes of natural "
         "numbers : ");
  scanf("%d", &m);
  printf("\nThe cubes of first %d natural numbers are : \n", m);
  while (o <= m) {
    p = o * o * o;
    printf("%d ", p);
    o++;
  }
  printf("\n");

  // Q10 Answer here
  int no, num = 1, count1, table;
  printf("Enter the number for table : ");
  scanf("%d", &no);
  printf("Enter the number till where you want to print table of %d : ", n);
  scanf("%d", &count1);
  printf("\nThe table of %d is given below : \n", no);
  while (num <= count1) {
    table = no * num;
    printf("%d ", table);
    num++;
  }
  printf("\n");
  return 0;
}