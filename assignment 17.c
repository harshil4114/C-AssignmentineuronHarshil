#include <stdio.h>

// Q1 Answer here
int main() {
  char str[100];
  int length = 0;

  printf("Enter a string: ");

  while (str[length] != '\0') {
    length++;
  }

  printf("Length of the string: %d\n", length);

  // Q2 Answer here
  int i, count = 0;
  char str1[100000], a;
  printf("Enter a string : ");
  fgets(str1, 100000, stdin);
  printf("\nEnter the character to count the occurrence of it : ");
  scanf("%c", &a);
  for (i = 0; str1[i]; i++) {
    if (str1[i] == a)
      count++;
  }
  printf("\nthe occurrence of \"%c\" is \"%d\" in %s", a, count, str1);

  // Q3 Answer here

  int charIndex, vowelCount = 0;
  char inputString[100000];

  printf("Enter a string: ");
  fgets(inputString, 100000, stdin);

  for (charIndex = 0; inputString[charIndex]; charIndex++) {
    if (inputString[charIndex] == 'a' || inputString[charIndex] == 'e' ||
        inputString[charIndex] == 'i' || inputString[charIndex] == 'o' ||
        inputString[charIndex] == 'u' || inputString[charIndex] == 'A' ||
        inputString[charIndex] == 'E' || inputString[charIndex] == 'I' ||
        inputString[charIndex] == 'O' || inputString[charIndex] == 'U') {
      vowelCount++;
    }
  }

  printf("\nTotal vowels are %d", vowelCount);

  // Q4 Answer here
  int index;
  char inputString1[100000];

  printf("Enter a string: ");
  fgets(inputString1, 100000, stdin);

  for (index = 0; inputString1[index]; index++) {
    if (inputString1[index] >= 'a' && inputString1[index] <= 'z') {
      inputString1[index] = inputString1[index] - 32;
    }
  }

  printf("\nConverted string is: %s", inputString1);

  // Q5 Answer here
  int x;
  char stri[100000];
  printf("Enter a string : ");
  fgets(str, 100000, stdin);
  for (i = 0; stri[i]; i++) {
    if (stri[i] >= 'A' && stri[i] <= 'Z')
      str[i] = stri[i] + 32;
  }
  printf("\nconverted string is : %s", str);

  // Q6 Answer here
  {
    int index, length = 0;
    char inputString[100000];

    printf("Enter a string: ");
    fgets(inputString, 100000, stdin);

    length = strlen(inputString) - 1; // Calculate the length of the string

    printf("\nReversed string is: ");
    for (index = length - 1; index >= 0; index--) {
      printf("%c", inputString[index]);
    }

    // Q7 Answer here
    int i, count_alpha = 0, count_digit = 0, count_special = 0;
    char str[100000];
    printf("Enter a string : ");
    fgets(str, 100000, stdin);
    for (i = 0; str[i]; i++) {
      if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        count_alpha++;
      else if (str[i] >= '0' && str[i] <= '9')
        count_digit++;
      else
        count_special++;
    }
    printf("\ntotal number of alphabets are %d", count_alpha);
    printf("\ntotal number of digits are %d", count_digit);
    printf("\ntotal number of special characters are %d", count_special - 1);

    // Q8 Answer here
    int ind;
    char originalStr[100000], copiedStr[100000];

    printf("Enter a string: ");
    fgets(originalStr, 100000, stdin);

    for (ind = 0; originalStr[i]; ind++) {
      copiedStr[ind] = originalStr[ind];
    }

    printf("\nThe copied string is:\n%s", copiedStr);
    // Q9 Answer here
    int index_i, index_j;
    char input_String[100000], tempChar;

    printf("Enter a string: ");
    fgets(input_String, 100000, stdin);

    for (index_i = 0; index_i < (strlen(input_String) - 1); index_i++) {
      for (index_j = index_i + 1; index_j < (strlen(inputString) - 1);
           index_j++) {
        if (input_String[index_i] > input_String[index_j]) {
          tempChar = input_String[index_i];
          input_String[index_i] = input_String[index_j];
          input_String[index_j] = tempChar;
        }
      }
    }

    printf("\nSorted string is:\n%s", input_String);
    // Q10 Answer here
    int indexnew, characterFrequency[128] = {0};
    char inputStr[100000];

    printf("Enter a string: ");
    fgets(inputStr, 100000, stdin);

    for (indexnew = 0; indexnew < (strlen(inputString) - 1); indexnew++) {
      characterFrequency[inputStr[indexnew]]++;
    }

    printf("\nCharacter frequencies:\n");
    for (indexnew = 1; indexnew < 128; indexnew++) {
      if (characterFrequency[indexnew] != 0) {
        printf("Frequency of '%c' is %d\n", indexnew,
               characterFrequency[indexnew]);
      }
    }

    return 0;
  }
}
