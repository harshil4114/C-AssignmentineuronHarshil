// Q1 Answer here
float area_of_circle(float);

// function to calculate the area of a circle. (TSRS)

float area_of_circle(float r) {
  float s = 3.14 * r * r;
  return s;
  // Q2 Answer here
}
float simple_interest(float, float, float);

// function to calculate simple interest. (TSRS)

float simple_interest(float p, float r, float t) {
  float SI = (p * r * t) / 100;
  return SI;
}
// Q3 Answer here
int even_odd(int);

// function of even_odd

int even_odd(int n) {
  if (n % 2 == 0)
    return 1;
  else
    return 0;
}
// Q4 Answer here
void natural_numbers(int);

// function to print first N natural numbers (TSRN)

void natural_numbers(int n) {
  printf("\nThe first %d natural numbers are : \n", n);
  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
  }
  printf("\n");
}
// Q5 Answer here
void N_odd_natural(int);

// function to print first N odd natural numbers. (TSRN)

void N_odd_natural(int n) {
  printf("\nThe first %d odd natural numbers are :\n", n);
  for (int i = 1; i <= 2 * n; i++) {
    if (i % 2 != 0)
      printf("%d ", i);
  }
  printf("\n");
}
// Q6 Answer here
int factorial(int);

// function to calculate the factorial of a number. (TSRS)

int factorial(int n) {
  int f = 1;
  for (int i = n; i > 0; i--)
    f = f * i;
  return f;
}
// Q7 Answer here
int combinations(int, int);

/* function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS) */

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
// Q7 Answer here
int combinations(int, int);

/* function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS) */

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
// Q8 Answer here
int permutation(int, int);

/* function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS) */

int permutation(int n, int r) {
  int p, n1 = 1, n2 = 1;
  for (int i = n; i > 0; i--)
    n1 = n1 * i;
  for (int j = n - r; j > 0; j--)
    n2 = n2 * j;
  p = n1 / n2;
  return p;
}
// Q9 Answer here
int contains_digit(int, int);

// function to check whether a given number contains a given digit or not.
// (TSRS)

int contains_digit(int n, int digit) {
  int s;
  for (int i = n; i != 0;) {
    s = i % 10;
    if (s == digit)
      return 1;
    i = i / 10;
  }
}
// Q10 Answer here
void prime_factor(int);

// function to print all prime factors of a given number.(TSRN)

void prime_factor(int n) {
  printf("\nPrime factors are : ");
  for (int i = 2; i <= n; i++) {
    while (n % i == 0) {
      printf("%d ", i);
      n = n / i;
    }
  }
}
