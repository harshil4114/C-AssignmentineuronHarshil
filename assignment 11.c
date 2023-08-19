int LCM(int, int);

// function to calculate LCM of two numbers. (TSRS)

int LCM(int a, int b) {
  for (int i = (a > b ? a : b); i <= (a * b); i++) {
    if (i % a == 0 && i % b == 0)
      return i;
  }
}
int HCF(int, int);

// function to calculate HCF of two numbers. (TSRS)

int HCF(int a, int b) {
  for (int i = (a < b ? a : b); i >= 1; i--) {
    if (a % i == 0 && b % i == 0)
      return i;
  }
}

#include <conio.h>
#include <stdio.h>
int prime_or_not(int);

// function to check whether a given number is Prime or not. (TSRS)

int prime_or_not(int n) {
  int k = 0;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      k++;
      break;
    }
  }
  if (k == 1)
    return 0;
  else
    return 1;
}

// Driver program

int main() {
  int a, b;
  printf("Enter a number : ");
  scanf("%d", &a);
  b = prime_or_not(a);
  if (b == 1)
    printf("\n%d is prime\n", a);
  else
    printf("\n%d is not prime\n", a);
  getch();
}
int prime_or_not(int n) {
  int k = 0;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      k++;
      break;
    }
  }
  if (k == 1)
    return 0;
  else
    return 1;
}

// Driver program

int main() {
  int a, b;
  printf("Enter a number : ");
  scanf("%d", &a);
  b = prime_or_not(a);
  if (b == 1)
    printf("\n%d is prime\n", a);
  else
    printf("\n%d is not prime\n", a);
  getch();
}
void first_N_prime(int n) {
  int a, i, k, count = 1;
  printf("\nThe first %d prime numbers are : \n", n);
  for (a = 2; count <= n; a++) {
    for (i = 2, k = 0; i < a; i++) {
      if (a % i == 0) {
        k++;
      }
    }
    if (k == 0) {
      printf("%d ", a);
      count++;
    }
  }
}

// Driver program

int main() {
  int n;
  printf("Enter number to print prime numbers : ");
  scanf("%d", &n);
  first_N_prime(n);
}
void allPrime_bw_two(int n1, int n2) {
  printf("\nPrime numbers between %d and %d are : \n", n1, n2);
  for (int i = n1 + 1; i < n2; i++) {
    int k = 0;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        k++;
        break;
      }
    }
    if (k == 0)
      printf("%d ", i);
  }
}

// Driver program

int main() {
  int a, b;
  printf("Enter two numbers to print all prime numbers between them : ");
  scanf("%d%d", &a, &b);
  allPrime_bw_two(a, b);
  getch();
}
void fibonacci(int n) {
  int n1 = -1, n2 = 1, i = 1, Nth;
  printf("\nFirst %d terms of fibonacci series are :\n", n);
  while (i <= n) {
    Nth = n1 + n2;
    n1 = n2;
    n2 = Nth;
    i++;
    printf("%d ", Nth);
  }
}

// Driver program

int main() {
  int n;
  printf("Enter number of terms for fibonacci series : ");
  scanf("%d", &n);
  fibonacci(n);
}
int pascal(int);
int combinations(int, int);

// function for printing PASCAL triangle

int pascal(int row) {
  int i, j, k, r;
  for (i = 1; i <= row; i++) {
    k = 1;
    r = 0;
    for (j = 1; j <= 2 * row - 1; j++) {
      if (j >= row + 1 - i && j <= row - 1 + i && k) {
        printf("%3d", combinations(i - 1, r));
        k = 0;
        r++;
      } else {
        printf(" ");
        k = 1;
      }
    }
    printf("\n");
  }
}

// function for combinations

int combinations(int n, int r) {
  int c, n1 = 1, n2 = 1, n3 = 1;
  for (int i = n; i > 0; i--)
    n1 = n1 * i;
  for (int j = n - r; j > 0; j--)
    n2 = n2 * j;
  for (int k = r; k > 0; k--)
    n3 = n3 * k;
  c = n1 / (n2 * n3);
  return c;
}
void square(int);

// function to calculate the square of any number

void square(int n) {
  int s;
  s = n * n;
  printf("\nSquare of %d is %d", n, s);
}

// Driver program

int main() {
  int n;
  printf("Enter a number to find square of it : ");
  scanf("%d", &n);
  square(n);
}
int factorial(int);
int main() {
  int sum;
  sum = factorial(1) / 1 + factorial(2) / 2 + factorial(3) / 3 +
        factorial(4) / 4 + factorial(5) / 5;
  printf("Sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 is %d", sum);
}

int factorial(int n) {
  int f = 1;
  for (int i = n; i > 0; i--)
    f = f * i;
  return f;
}
