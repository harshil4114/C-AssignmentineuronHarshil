#include <stdio.h>

int length(char str[]);

int main() {
  char myString[] = "Hello, World!";
  int len = length(myString);
  printf("Length of the string: %d\n", len);
}

// Q2 Answer here

void reverse(char[]);

// function to reverse a string.

void reverse(char str[]) {
  int i, count = 0;
  count = strlen(str) - 1;
  printf("\nreversed string is : ");
  for (i = count - 1; i >= 0; i--)
    printf("%c", str[i]);
}

// Q3 Answer here
void compare(char[], char[]);

// function to compare two strings

void compare(char str[], char str1[]) {
  int i, count, n;
  if (strlen(str) == strlen(str1)) {
    n = strlen(str);
    for (i = 0; i < n - 1; i++) {
      if (str[i] == str1[i])
        count++;
    }
    if (count == i)
      printf("\nStrings are equal");
    else
      printf("\nStrings are not equal");
  } else
    printf("\nStrings are not equal");
}

// Q4 Answer here
void uppercase(char[]);

// function to transform string into uppercase

void uppercase(char str[]) {
  int i;
  for (i = 0; str[i]; i++) {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
  }
  printf("\nconverted string is : %s", str);
}

// Q5 Answer here
void lowercase(char[]);

// function to transform string into lowercase

void lowercase(char str[]) {
  int i;
  for (i = 0; str[i]; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
  }
  printf("\nconverted string is : %s", str);
}

// Q6 Answer here

int isAlphanumeric(char str[]) {
  int i, countAlpha = 0, countDigit = 0;

  for (i = 0; str[i]; i++) {
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
      countAlpha++;
    }
    if (str[i] >= '0' && str[i] <= '9') {
      countDigit++;
    }
  }

  if (countAlpha >= 1 && countDigit >= 1) {
    return 1; // It's alphanumeric
  } else {
    return 0; // It's not alphanumeric
  }

  // Q7 Answer here
  int isPalindrome(char str[]) {
    int i, matchCount = 0, j, len;
    len = strlen(str);
    j = len - 1;

    for (i = 0; i < len; i++) {
      if (i == j)
        break;

      if (str[i] == str[j]) {
        j--;
        matchCount++;
      } else {
        return 0; // Not a palindrome
      }
    }

    if (matchCount >= 1) {
      return 1; // It's a palindrome
    }
  }
  // Q8 Answer here
  int countWords(char str[]) {
    int i, wordCount = 0, len;
    len = strlen(str);

    for (i = 0; i < len; i++) {
      if (len > 1 && str[i] == ' ') {
        wordCount++;
      }
    }

    if (len > 1) {
      return wordCount + 1;
    } else {
      return 0;
    }
    // Q9 Answer here
    void reverse_string_wordwise(int);

    // function to reverse a string word wise

    void reverse_string_wordwise(int array_size) {
      char str[array_size];
      int i, j, n, count = 0;
      printf("Enter a string : ");
      fgets(str, array_size, stdin);
      n = strlen(str) - 1;
      printf("\nReversed string is : ");
      for (i = n - 1; i >= 0; i--) {
        count++;
        if (i == 0) {
          for (j = 0; j < count; j++)
            printf("%c", str[j]);
        } else if (str[i] == ' ') {
          for (j = i + 1; j < (i + count); j++) {
            printf("%c", str[j]);
          }
          printf(" ");
          count = 0;
        }
      }
    }
    // Q10 Answer here
    void repeated_characters(char[]);

    // function to find the repeated character in a given string

    void repeated_characters(char str[]) {
      int i, freq[128] = {0};
      for (i = 0; str[i]; i++) {
        freq[str[i]]++;
      }
      printf("\nrepeated characters are :\n");
      for (i = 1; i < 128; i++) {
        if (freq[i] > 1)
          printf("%c\n", i);
      }
    }
  }
}