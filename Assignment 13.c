#include <stdio.h>
int sumOfNatural(int);
int sumOfNatural(int n) {
  int sum = 0;
  if (n == 1)
    return 1;
  sum = n + sumOfNatural(n - 1);
  return sum;
}
// Q2 Answer here
int sumOfOdd(int);
int sumOfOdd(int n) {
  int sum = 0;
  if (n > 0) {
    sum = n * 2 - 1 + sumOfOdd(n - 1);
  }
  return sum;
}

// Q3 Answer here
int sumOfEven(int);
int sumOfEven(int num) {
  int sum = 0;
  if (num > 0) {
    sum = num * 2 + sumOfEven(num - 1);
  }
  return sum;
}

// Q4 Answer here
int sumOfSquares(int);
int sumOfSquares(int n) {
  int sum = 0;
  if (n > 0) {
    sum = n * n + sumOfSquares(n - 1);
  }
  return sum;
}
// Q5 Answer here
int sumOfsumOfDigits(int);
int sum = 0, rem;
int sumOfsumOfDigits(int n) {
  if (n > 0) {
    rem = n % 10;
    sum = sum + rem;
    sumOfsumOfDigits(n / 10);
  }
  return sum;
}

// Q6 Answer here
int Factorial(int);
int fact = 1;
int Factorial(int n) {
  if (n > 0) {
    fact = n * Factorial(n - 1);
  }
  return fact;
}
// Q7 Answer here
int HCF(int, int);
int div = 0, hcf;
int HCF(int n1, int n2) {
  div++;
  int x;
  if (n1 > n2)
    x = n1;
  else
    x = n2;
  if (div <= x) {
    if (n1 % div == 0 && n2 % div == 0)
      hcf = div;
    HCF(n1, n2);
  }
  return hcf;
}
// Q8 Answer here
int Fibonacci(int);
int n1 = -1, n2 = 1;
int Fibonacci(int n) {
  if (n > 0) {
    int n3;
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    printf("%d ", n3);
    Fibonacci(n - 1);
  }
}

// Q9 Answer here
int CountDigits(long long);
int count = 0;
int main() {
  long long number;
  printf("Enter a number : ");
  scanf("%d", &number);
  printf("\nTotal digits are = %d", CountDigits(number));
}
int CountDigits(long long number) {
  if (number > 0) {
    count++;
    CountDigits(number / 10);
  }
  return count;
}

// Q10 Answer here
int calculatePower(int, int);
unsigned long long int result = 1;

int main() {
  int base, exponent;
  printf("Enter base number: ");
  scanf("%d", &base);
  printf("Enter exponent: ");
  scanf("%d", &exponent);

  printf("\n%d", calculatePower(base, exponent));
  return 0;
}

int calculatePower(int base, int exponent) {
  if (exponent > 0) {
    result = base * calculatePower(base, exponent - 1);
  }
  return result;
}