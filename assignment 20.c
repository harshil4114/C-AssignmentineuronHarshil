#include <stdio.h>
void swap(int *, int *);

// Q1 Asnwer here

void swap(int *p, int *q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

// Q2 Answer here
void swap_(char *, char *, int);

// function to swap strings of two char arrays using pointers

void swap_(char *p, char *q, int size) {
  char temp[size];
  strcpy(temp, p);
  strcpy(p, q);
  strcpy(q, temp);
}

// Q3 Answer here
void sort(int *, int);

// function to sort an array of int type values using pointers

void sort(int *ptr, int size) {
  int temp;
  for (int i = 0; i < size; i++)
    for (int j = i + 1; j < size; j++) {
      if (ptr[i] > ptr[j]) {
        temp = ptr[j];
        ptr[j] = ptr[i];
        ptr[i] = temp;
      }
    }
}

// Q4 Answer here
int main() {
  int a = 10, *p, **q, ***r;
  p = &a;
  q = &p;
  r = &q;
  printf("%d %d %d\n", p, q, r);
  printf("%d %d %d\n", *p, *q, *r);
  printf("%d %d %d\n", a, **q, **r);
  printf("%d %d %d\n", *p, **q, ***r);
  return 0;
}

// Q5 Answer here
{
  int a, b, *p, *q;
  printf("Enter two numbers :\n");
  scanf("%d %d", &a, &b);
  p = &a;
  q = &b;
  if (*p > *q)
    printf("%d is maximum number between %d and %d", *p, a, b);
  else
    printf("%d is maximum number between %d and %d", *q, a, b);
}

// Q6 Answer here
{
  int i;
  char str[10000];
  char *p;
  p = str;
  printf("Enter a string :\n");
  fgets(str, 10000, stdin);
  for (i = 0; p[i]; i++)
    ;
  printf("length of the string = %d", i - 1);
}

// Q7 Answer here
{
  int i, vowel_count = 0, consonant_count = 0;
  char str[10000];
  char *p;
  p = str;
  printf("Enter a string :\n");
  fgets(str, 10000, stdin);
  for (i = 0; p[i]; i++) {
    if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u')
      vowel_count++;
    else if (p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' ||
             p[i] == 'U')
      vowel_count++;
    else if ((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z'))
      consonant_count++;
  }
  printf("\nTotal vowels = %d", vowel_count);
  printf("\nTotal consonants = %d", consonant_count);
}

// Q8 Answer here
{
  int a[10000], *p, n, i, sum = 0;
  p = a;
  printf("How many numbers you want to enter : ");
  scanf("%d", &n);
  printf("Enter %d numbers :\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
    sum = sum + p[i];
  printf("\nSum is %d", sum);
}

// Q9 Answer here
{
  int array[10000], *pointer, num_elements, index;

  pointer = array;
  printf("How many numbers you want to enter: ");
  scanf("%d", &num_elements);
  printf("Enter %d numbers:\n", num_elements);

  for (index = 0; index < num_elements; index++)
    scanf("%d", &array[index]);

  printf("\nElements of an array in reverse order are:\n");
  for (index = num_elements - 1; index >= 0; index--)
    printf("%d ", pointer[index]);
}

// Q10 Answer here
{
  char a[10000], *p;
  p = a;
  printf("Enter a string : ");
  fgets(a, 10000, stdin);
  int len = strlen(a), j;
  if (len > 0 && a[len - 1] == '\n')
    a[len - 1] = '\0';
  printf("\nstring in reverse order is : ");
  for (j = len - 1; j >= 0; j--)
    printf("%c", p[j]);
}
