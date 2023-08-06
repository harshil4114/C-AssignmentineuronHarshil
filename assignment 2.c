
#include <stdio.h>

int main() {
  // Q1 Answer here
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  x = x % 10;
  printf("The unit digit of the given number is %d\n", x);

  // Q2 answer here
  printf("\nEnter a number: ");
  int a, last_digit;
  scanf("%d", &a);
  last_digit = a % 10;
  printf("%d\n", last_digit);

  // Q3 answer here
  printf("\nEnter two values: ");
  unsigned int b, c, temp;
  scanf("%u%u", &b, &c);
  temp = b;
  b = c;
  c = temp;
  printf("%u %u\n", b, c);

  // Q4 answer here
  printf("\nEnter two values : ");
  int m, n;
  scanf("%d%d", &m, &n);
  m = m * n;
  n = m / n;
  m = m / n;
  printf("\n%d %d", m, n);

  // Q5 answer here
  int d, sum = 0;
  printf("\nEnter a three-digit number : ");
  scanf("%d", &d);
  sum = (d % 10) + (d / 10) % 10 + d / 100;
  printf("Sum of digits of %d is %d ", d, sum);

  // Q6 answer here
  printf("\nEnter a character : ");
  char ch;
  scanf("%c", &ch);
  printf("\nascii code is %d", ch);

  // Q7 answer here
  int r = 10, count = 0, result = 0;
  result = r & 1;
  count++;
  if (result == 1)
    printf("position of first 1 in LSB is %d", count);
  r = r >> 1;
  result = r & 1;
  count++;
  if (result == 1)
    printf("position of first 1 in LSB is %d", count);

  // Q8 answer here
  int k;
  printf("\nEnter a number : ");
  scanf("%d", &k);
  if (k & 1) {
    printf("\nnumber is odd\n");
  } else {
    printf("\nnumber is even\n");
  }
  // Q9 answer here
  int vari;
  vari = sizeof(double);
  printf("size of double type variable is %d", vari);
  vari = sizeof(float);
  printf("\nsize of float type variable is %d", vari);
  vari = sizeof(int);
  printf("\nsize of int type variable is %d", vari);
  vari = sizeof(char);
  printf("\nsize of char type variable is %d", vari);

  // Q10 Answer here
  printf("\nEnter a number : ");
  int no, digit;
  scanf("%d", &no);
  digit = no % 10;
  no = no - digit;
  printf("\nThe new number is %d ", no);

  // Q11 Answer here
  int digit1, digit2;
  printf("\nEnter a number : ");
  scanf("%d", &digit1);
  printf("Enter the digit : ");
  scanf("%d", &digit2);
  a = (digit1 * 10) + digit2;
  printf("\nThe new number is %d ", a);

  // Q12 answer here
  float INR, USD;
  printf("\nEnter the amount in INR : ");
  scanf("%f", &INR);
  USD = INR / 82.10;
  printf("\nConverted amount is %f USD", USD);

  // Q13 answer here
  int newno;
  printf("Enter the three digit number : ");
  scanf("%d", &newno);
  newno = newno >> 1;
  printf("\nConverted number is %d", newno);

  return 0;
}
