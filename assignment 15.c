#include <stdio.h>
int main() {
  int greatest_no(int[], int);

  // function to find the greatest number from the given array of any size.
  // (TSRS)

  int greatest_no(int b[], int n) {
    int greatest = -2147483647;
    printf("Enter %d elements : ", n);
    for (int i = 0; i <= n - 1; i++) {
      scanf("%d", &b[i]);
      if (greatest < b[i])
        greatest = b[i];
    }
    return greatest;
  }

  // Q2 Answer here
  int smallest_no(int[], int);

  // function to find the smallest number from the given array of any size.
  // (TSRS)

  int smallest_no(int b[], int n) {
    int smallest = 2147483647;
    printf("Enter %d elements : ", n);
    for (int i = 0; i <= n - 1; i++) {
      scanf("%d", &b[i]);
      if (smallest > b[i])
        smallest = b[i];
    }
    return smallest;
  }

  // Q3 Answer here
  void sortArray(int[], int);

  void sortArray(int arr[], int size) {
    int outerIndex, innerIndex, temp;
    printf("\nEnter %d elements: ", size);

    for (outerIndex = 0; outerIndex < size; outerIndex++) {
      scanf("%d", &arr[outerIndex]);
    }

    for (outerIndex = 0; outerIndex < size; outerIndex++) {
      for (innerIndex = outerIndex + 1; innerIndex < size; innerIndex++) {
        if (arr[outerIndex] > arr[innerIndex]) {
          temp = arr[innerIndex];
          arr[innerIndex] = arr[outerIndex];
          arr[outerIndex] = temp;
        }
      }
    }

    printf("\nSorted elements are ");
    for (outerIndex = 0; outerIndex < size; outerIndex++) {
      printf("%d ", arr[outerIndex]);
    }
  }

  // Q4 Answer here
  void arrayRotation(int[], int);

  void arrayRotation(int originalArray[], int N) {
    int outer, inner, rotationDirection, rotations, tempArray[N], k;

    printf("\nPress 1 for rotating left");
    printf("\nPress 2 for rotating right");
    printf("\n\nEnter choice for rotation: ");
    scanf("%d", &rotationDirection);
    printf("\nHow many times you want to rotate: ");
    scanf("%d", &rotations);
    printf("\nEnter %d numbers: ", N);

    for (outer = 0; outer < N; outer++) {
      scanf("%d", &originalArray[outer]);
    }

    if (rotationDirection == 1) {
      outer = 0;
      for (inner = rotations; inner < N; inner++) {
        tempArray[outer++] = originalArray[inner];
      }
      k = 0;
      for (outer = N - rotations; outer < N; outer++) {
        tempArray[outer] = originalArray[k++];
      }
    } else if (rotationDirection == 2) {
      outer = 0;
      for (inner = N - rotations; inner < N; inner++) {
        tempArray[outer++] = originalArray[inner];
      }
      k = 0;
      for (outer = rotations; outer < N; outer++) {
        tempArray[outer] = originalArray[k++];
      }
    }

    printf("\nArray after rotation:\n");
    for (outer = 0; outer < N; outer++) {
      printf("%d ", tempArray[outer]);
    }
    // Q5 Answer here
    int findAdjacentDuplicate(int arr[], int size) {
      for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
          return arr[i];
        }
      }
      return -1; // If no adjacent duplicates are found
    }
  }
  // Q6 Answer here
  void displayReversedArray(int arr[], int size);

  void displayReversedArray(int array[], int size) {
    int index;
    printf("Enter %d elements: ", size);
    for (index = 0; index < size; index++) {
      scanf("%d", &array[index]);
    }
    printf("\nValues in the array in reverse order:\n");
    for (index = size - 1; index >= 0; index--) {
      printf("%d ", array[index]);
    }
    printf("\n");
  }

  // Q7 Answer here

  int countDuplicate(int arr[], int size);

  int countDuplicate(int array[], int size) {
    int i, j, totalCount = 0;
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
      scanf("%d", &array[i]);
    }
    for (i = 0; i < size; i++) {
      for (j = 0; j < size; j++) {
        if (i == j) {
          j++;
        }

        if (array[i] == array[j]) {
          totalCount++;
        }
      }
    }
    return totalCount / 2;
  }
  // Q8 Answer here
  int countDuplicateTwice(int arr[], int size) {
    int duplicateCount = 0;

    for (int outerIndex = 0; outerIndex < size; outerIndex++) {
      int currentElement = arr[outerIndex];
      int elementCount = 0;

      for (int innerIndex = 0; innerIndex < size; innerIndex++) {
        if (arr[innerIndex] == currentElement) {
          elementCount++;
        }
      }

      if (elementCount == 2) {
        duplicateCount++;
      }
    }

    return duplicateCount;
  }
  // Q9 Answer here
  void mergeSortedArrays(int arr1[], int arr2[], int size);

  void mergeSortedArrays(int array1[], int array2[], int n) {
    int merged[2 * n], index1 = n - 1, index2 = n - 1, k;

    for (k = 0; k < 2 * n; k++) {
      if (index1 < 0) {
        if (index2 >= 0) {
          merged[k] = array2[index2];
          index2--;
        }
      } else if (index2 < 0) {
        if (index1 >= 0) {
          merged[k] = array1[index1];
          index1--;
        }
      } else if (array1[index1] < array2[index2] && index1 >= 0 &&
                 index2 >= 0) {
        merged[k] = array1[index1];
        index1--;
      } else {
        merged[k] = array2[index2];
        index2--;
      }
    }

    printf("\nMerged array is:\n\n");
    for (int i = 0; i < 2 * n; i++) {
      printf("%d ", merged[i]);
    }
    printf("\n");
  }

  // Q10 Answer here
  void countElementFrequency(int arr[], int size);

  void countElementFrequency(int array[], int arr_size) {
    int i, positive_frequency[99999] = {0}, negative_frequency[99999] = {0};

    for (i = 0; i < arr_size; i++) {
      if (array[i] >= 0) {
        positive_frequency[array[i]]++;
      } else {
        negative_frequency[array[i] * (-1)]++;
      }
    }

    for (i = 0; i < 99999; i++) {
      if (negative_frequency[i] != 0) {
        printf("\nFrequency of %d is %d", -i, negative_frequency[i]);
      }
    }

    for (i = 0; i < 99999; i++) {
      if (positive_frequency[i] != 0) {
        printf("\nFrequency of %d is %d", i, positive_frequency[i]);
      }
    }
  }
}