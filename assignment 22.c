#include <stdio.h>
#include <string.h>

void storeStrings(int n) {
  char **strings = (char **)malloc(n * sizeof(char *));

  for (int i = 0; i < n; i++) {
    char buffer[100]; // Adjust buffer size as needed
    printf("Enter string %d: ", i + 1);
    scanf(" %99[^\n]", buffer); // Read up to 99 characters or until newline
    strings[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
    strcpy(strings[i], buffer);
  }

  // Display stored strings
  printf("Stored strings:\n");
  for (int i = 0; i < n; i++) {
    printf("%d: %s\n", i + 1, strings[i]);
    free(strings[i]); // Free memory for each string
  }

  free(strings); // Free memory for the array of strings
}

int main() {
  int n, sum = 0;
  printf("Enter the number of data values: ");
  scanf("%d", &n);

  int *data = (int *)malloc(n * sizeof(int));

  printf("Enter data values:\n");
  for (int i = 0; i < n; i++) {
    printf("Enter value %d: ", i + 1);
    scanf("%d", &data[i]);
    sum += data[i];
  }

  double average = (double)sum / n;
  printf("Average of data values: %.2f\n", average);

  free(data);
  return 0;
}
int main() {

  int *p, n, i, sum = 0;
  printf("Enter the size of array : ");
  scanf("%d", &n);
  p = (int *)malloc(n * sizeof(int));
  printf("\nEnter elements :\n");
  for (i = 0; i < n; i++)
    scanf("%d", &p[i]);
  for (i = 0; i < n; i++)
    sum = sum + p[i];
  printf("\nSum is %d", sum);
  free(p);
  return 0;
}
{
  int *array, size, i,
      largest =
          INT_MIN; // Change variable names and use INT_MIN for initialization

  printf("Enter size of array: ");
  scanf("%d", &size);

  // Allocate memory for the array
  array = (int *)calloc(size, sizeof(int));

  printf("\nEnter elements: ");
  for (i = 0; i < size; i++)
    scanf("%d", &array[i]);

  // Find the largest element
  for (i = 0; i < size; i++) {
    if (array[i] > largest)
      largest = array[i];
  }

  printf("\nLargest element is %d", largest);

  // Free allocated memory
  free(array);
}
{
  int *dynamicIntArray;

  // Allocate memory for an integer
  dynamicIntArray = (int *)malloc(sizeof(int));

  printf("Address of the dynamically allocated integer: %p",
         (void *)dynamicIntArray);

  // Set the pointer to NULL
  dynamicIntArray = NULL;

  printf("\nAddress after setting to NULL: %p", (void *)dynamicIntArray);

  // Allocate memory for another integer and print its address
  int *newDynamicInt = (int *)malloc(sizeof(int));
  printf("\nAddress of a new dynamically allocated integer: %p",
         (void *)newDynamicInt);

  // Free the dynamically allocated memory
  free(newDynamicInt);
}

{
  char *p;
  p = (char *)malloc(20 * sizeof(char)); // pointing memory location of variable
  *p = 'C';                              // assigned value in variable
  printf("%c", *p);
  printf("\n%d", p); // printing the address of variable
  free(p);           // freeing the memory
  printf("\n%d",
         p); // still holds the address of varible which is freed from memory
  printf("\n%d", *p); // prints some other value
}

{
  int *p1, *p2;
  p1 = (int *)malloc(2000000000 * sizeof(int));
  p2 = (int *)malloc(20000000000 * sizeof(int));

  if (p1 == NULL)
    printf("memory allocation failed for 1st variable\n");
  else
    printf("memory allocation success for 1st variable\n");

  if (p2 == NULL)
    printf("memory allocation failed for 2nd variable\n");
  else
    printf("memory allocation success for 2nd variable\n");
}

{
  int *array, size, index, maximum = -9999999, minimum = 9999999;

  printf("Enter size of array: ");
  scanf("%d", &size);

  array = (int *)calloc(size, sizeof(int));

  printf("\nEnter elements: ");
  for (index = 0; index < size; index++)
    scanf("%d", &array[index]);

  for (index = 0; index < size; index++) {
    if (array[index] > maximum)
      maximum = array[index];

    if (array[index] < minimum)
      minimum = array[index];
  }

  printf("\nMaximum element is %d", maximum);
  printf("\nMinimum element is %d", minimum);

  free(array);
}