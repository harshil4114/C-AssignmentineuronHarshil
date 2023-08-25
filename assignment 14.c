#include <stdio.h>
int main() {
  int i, a[10], sum = 0;
  printf("Enter 10 numbers : ");
  for (i = 0; i <= 9; i++) {
    scanf("%d", &a[i]);
    sum = sum + a[i];
  }
  printf("Sum is %d", sum);
  return 0;

  // Q2 Answer here
  int j, k[10], total = 0;
  float average;
  printf("Enter 10 numbers : ");
  for (j = 0; j <= 9; j++) {
    scanf("%d", &k[i]);
    total = total + k[i];
  }
  average = total / 10.0;
  printf("Average is %f", average);
  return 0;

  // Q3 Answer here
  int index, numbers[10], evenSum = 0, oddSum = 0;

  printf("Enter 10 numbers: ");
  for (index = 0; index <= 9; index++) {
    scanf("%d", &numbers[index]);

    if (numbers[index] % 2 == 0) {
      evenSum = evenSum + numbers[index];
    } else {
      oddSum = oddSum + numbers[index];
    }
  }

  printf("Sum of even numbers is %d\n", evenSum);
  printf("Sum of odd numbers is %d\n", oddSum);

  return 0;

  // Q4 Answer here
  int ind, inputArray[10], greatestNumber = -2147483647;

  printf("Enter 10 elements: ");
  for (ind = 0; ind <= 9; ind++) {
    scanf("%d", &inputArray[ind]);

    if (greatestNumber < inputArray[ind]) {
      greatestNumber = inputArray[ind];
    }
  }

  printf("The greatest number is %d\n", greatestNumber);

  return 0;

  // Q5 Answer here
  int iterator, values[10], tiniest = 2147483647;

  printf("Enter 10 elements: ");
  for (iterator = 0; iterator <= 9; iterator++) {
    scanf("%d", &values[iterator]);

    if (tiniest > values[iterator]) {
      tiniest = values[iterator];
    }
  }

  printf("The smallest number is %d\n", tiniest);

  return 0;

  // Q6 Answer here
  int outerIndex, innerIndex, numbers[10], temporary;

  printf("Enter 10 elements: ");
  for (outerIndex = 0; outerIndex <= 9; outerIndex++) {
    scanf("%d", &numbers[outerIndex]);
  }

  for (outerIndex = 0; outerIndex <= 9; outerIndex++) {
    for (innerIndex = outerIndex + 1; innerIndex <= 9; innerIndex++) {
      // Checking the two elements to determine if swapping is needed
      if (numbers[outerIndex] > numbers[innerIndex]) {
        temporary = numbers[innerIndex];
        numbers[innerIndex] = numbers[outerIndex];
        numbers[outerIndex] = temporary;
      }
    }
  }

  printf("Sorted elements are ");
  for (outerIndex = 0; outerIndex <= 9; outerIndex++) {
    printf("%d ", numbers[outerIndex]);
  }

  return 0;

  // Q7 Answer here
  int size, counter;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter %d elements: ", size);
  for (counter = 0; counter < size; counter++) {
    scanf("%d", &arr[counter]);
  }

  int largest = arr[0];
  int secondLargest = arr[0];

  for (counter = 1; counter < size; counter++) {
    if (arr[counter] > largest) {
      secondLargest = largest;
      largest = arr[counter];
    } else if (arr[counter] > secondLargest && arr[counter] != largest) {
      secondLargest = arr[counter];
    }
  }

  printf("The second largest element is %d\n", secondLargest);
  return 0;

  // Q8 Answer here
  int arraySize, c;

  printf("Enter the size of the array: ");
  scanf("%d", &arraySize);

  int number[arraySize];

  printf("Enter %d elements: ", arraySize);
  for (c = 0; c < arraySize; c++) {
    scanf("%d", &number[c]);
  }

  int smallest = number[0];
  int secondSmallest = number[0];

  for (c = 1; c < arraySize; c++) {
    if (numbers[c] < smallest) {
      secondSmallest = smallest;
      smallest = number[c];
    } else if (numbers[c] < secondSmallest && number[c] != smallest) {
      secondSmallest = number[c];
    }
  }

  printf("The second smallest number is %d\n", secondSmallest);

  return 0;

  // Q9 Answer here
  int arraySize1;

  printf("Enter the size of the array: ");
  scanf("%d", &arraySize1);

  int uniqueArray[arraySize1];

  printf("Enter %d elements: ", arraySize1);
  for (int uniqueVar = 0; uniqueVar < arraySize; uniqueVar++) {
    scanf("%d", &uniqueArray[uniqueVar]);
  }

  printf("Array in reverse order: ");
  for (int anotherUniqueVar = arraySize - 1; anotherUniqueVar >= 0;
       anotherUniqueVar--) {
    printf("%d ", uniqueArray[anotherUniqueVar]);
  }
  printf("\n");

  return 0;

  // Q10 Answer here
  int sizearr;

  printf("Enter the size of the array: ");
  scanf("%d", &sizearr);

  int source[sizearr];
  int destination[sizearr];

  printf("Enter %d elements for the source array: ", sizearr);
  for (int srcIndex = 0; srcIndex < size; srcIndex++) {
    scanf("%d", &source[srcIndex]);
  }

  for (int destIndex = 0; destIndex < sizearr; destIndex++) {
    destination[destIndex] = source[destIndex];
  }

  printf("Copied elements in the destination array: ");
  for (int printIndex = 0; printIndex < sizearr; printIndex++) {
    printf("%d ", destination[printIndex]);
  }
  printf("\n");

  return 0;
}
