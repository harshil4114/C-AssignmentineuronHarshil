#include <stdio.h>
#include <string.h>
int main() {
  int i, j, count = 0;
  char str[5][100];
  printf("Enter a string : ");
  for (i = 0; i < 5; i++) {
    fgets(str[i], 20, stdin);
    int len = strlen(str[i]);
    if (len > 0 && str[i][len - 1] == '\n')
      str[i][len - 1] = '\0';
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; str[i][j] != '\0'; j++) {
      if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' ||
          str[i][j] == 'o' || str[i][j] == 'u')
        count++;
      else if (str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' ||
               str[i][j] == 'O' || str[i][j] == 'U')
        count++;
    }
    printf("\ntotal vowels in \"%s\" = %d", str[i], count);
    count = 0;
  }

  // Q2 Answer here

  int cityIndex1, cityIndex2;
  char cities[10][25], tempCity[25];

  printf("Enter 10 city names:\n");

  for (cityIndex1 = 0; cityIndex1 < 10; cityIndex1++) {
    fgets(cities[cityIndex1], 25, stdin);
    int len = strlen(cities[cityIndex1]);

    if (len > 0 && cities[cityIndex1][len - 1] == '\n') {
      cities[cityIndex1][len - 1] = '\0';
    }
  }

  printf("\nSorted city names are:\n");

  for (cityIndex1 = 0; cityIndex1 < 10; cityIndex1++) {
    for (cityIndex2 = cityIndex1 + 1; cityIndex2 < 10; cityIndex2++) {
      if (strcmp(cities[cityIndex1], cities[cityIndex2]) > 0) {
        strcpy(tempCity, cities[cityIndex1]);
        strcpy(cities[cityIndex1], cities[cityIndex2]);
        strcpy(cities[cityIndex2], tempCity);
      }
    }
    printf("\n%s", cities[cityIndex1]);
  }

  // Q3 Answer here
  int index, numStrings;
  char strings[100][10000];

  printf("How many strings you want to enter: ");
  scanf("%d", &numStrings);
  printf("\nInput strings:\n\n");

  for (index = 0; index <= numStrings; index++) {
    fgets(strings[index], 10000, stdin);
    int len = strlen(strings[index]);

    if (len > 0 && strings[index][len - 1] == '\n') {
      strings[index][len - 1] = '\0';
    }
  }

  printf("\nEntered strings are:\n");

  for (index = 0; index <= numStrings; index++) {
    printf("%s\n", strings[index]);
  }

  // Q4 Answer here
  int result, num_Strings;
  printf("How many strings you want to enter: ");
  scanf("%d", &num_Strings);
  result = searchString(num_Strings);
  if (result == 0)
    printf("\nString found.\n");
  else
    printf("\nString not found.\n");
}

int searchString(int totalLines) {
  int i;
  char strings[1000][100], searchStr[100];
  printf("\nInput strings:\n");
  for (i = 0; i <= totalLines; i++)
    fgets(strings[i], 100, stdin);
  printf("\nEnter the string you want to search for: ");
  fgets(searchStr, 100, stdin);
  for (i = 0; i <= totalLines; i++) {
    if (strcmp(strings[i], searchStr) == 0)
      return 0;
  }
  // Q5 Answer here
  int k, j, n;
  char str[1000][50];
  printf("How many emails you want to enter : ");
  scanf("%d", &n);
  printf("\nInput emails :\n\n");
  for (k = 0; k < n; k++)
    scanf("%s", str[k]);
  printf("\nEmails without @ are:\n");
  for (k = 0; k < n; k++) {
    if (strchr(str[k], '@') == 0)
      printf("\n%s", str[i]);
  }

  // Q6 Answer here
  int palindrome(char[]);
  {

    int i, total;
    char str[1000][50];
    printf("How many strings you want to enter : ");
    scanf("%d", &total);
    printf("\nInput strings :\n\n");
    for (i = 0; i < total; i++)
      scanf("%s", str[i]);
    printf("\nPalindrome strings are :\n");
    for (i = 0; i < total; i++)
      if (palindrome(str[i]) == 1)
        printf("\n%s", str[i]);
  }
  // function to check whether a given string is palindrome or not
  int palindrome(char str[]) {
    int i, count = 0, j;
    j = strlen(str) - 1;
    for (i = 0; i < (strlen(str) - 1); i++) {
      if (i == j)
        break;
      if (str[i] == str[j]) {
        j--;
        count++;
      } else
        return 0;
    }
    if (count >= 1)
      return 1;
  }

  // Q7 Answer here
  void IP(char[]);
  {
    int i, n;
    char str[1000][30];
    printf("How many IP addresses you want to input : ");
    scanf("%d", &n);
    printf("\nEnter IP addresses :\n");
    for (i = 0; i < n; i++)
      scanf("%s", str[i]);
    printf("\n");
    for (i = 0; i < n; i++)
      IP(str[i]);
  }
  void IP(char str[]) {
    char st[20];
    strcpy(st, str);
    int count = 0, x;
    char *a = strtok(str, ".");
    while (a != NULL) {
      x = atoi(a);
      if (x >= 0 && x <= 255)
        count++;
      a = strtok(NULL, ".");
    }
    if (count == 4)
      printf("%s = valid IP address\n", st);
    else
      printf("%s = invalid IP address\n", st);
  }

  // Q8 Answer here
  int index, numWords, wordIndex1 = -1, wordIndex2 = -1, minDistance = 0;

  char words[100][20], word1[20], word2[20];

  printf("How many words you want to enter: ");
  scanf("%d", &numWords);

  printf("\nEnter words:\n");

  for (index = 0; index < numWords; index++)
    scanf("%s", words[index]);

  printf("\nTo find minimum distance between two words:\n");
  printf("\nEnter first word: ");
  scanf("%s", word1);
  printf("\nEnter second word: ");
  scanf("%s", word2);

  for (index = 0; index < numWords; index++) {
    if (strcmp(word1, words[index]) == 0)
      wordIndex1 = index;

    if (strcmp(word2, words[index]) == 0)
      wordIndex2 = index;
  }

  if (wordIndex1 != -1 && wordIndex2 != -1) {
    if (wordIndex2 - wordIndex1 > 0)
      minDistance = wordIndex2 - wordIndex1 - 1;
    else if (wordIndex2 - wordIndex1 < 0)
      minDistance = (wordIndex2 - wordIndex1) * (-1) - 1;
    else
      minDistance = 0;

    printf("\n%d", minDistance);
  }

  // Q9 Answer here
  int index, flag = 0;
  char usernames[4][20] = {"ineuron@ai", "c++Bootcamp", "ineuron@c++",
                           "mysirg@123"};
  char userInput[20];

  printf("Enter username: ");
  fgets(userInput, 20, stdin);

  int len = strlen(userInput);

  if (len > 0 && userInput[len - 1] == '\n') {
    userInput[len - 1] = '\0';
  }

  for (index = 0; index < 4; index++) {
    if (strcmp(userInput, usernames[index]) == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 1) {
    int number, factorial = 1, i;

    printf("\nEnter a number for factorial: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
      factorial = factorial * i;
    }

    printf("\nFactorial of %d is %d ", number, factorial);
  } else {
    printf("\nIncorrect username");
  }

  // Q10 Answer here
#include <conio.h>
#include <stdlib.h>
#include <string.h>
  void login(char[], char[]);
  void SignUp(char[], char[]);
  void red();
  void yellow();
  void green();
  void blue();
  void reset();
  int main() {
    int n;
    char str[2][20], username[20], password[20];
    while (1) {
      printf("\t\tWelcome to authentication portal\n");
      printf("\nPress 1 for Login");
      printf("\nPress 2 for SignUp");
      printf("\nPress 3 for Exit\n\n");
      scanf("%d", &n);
      switch (n) {
      case 1:
        system("cls");
        login(username, password);
        break;
      case 2:
        system("cls");
        SignUp(username, password);
        break;
      case 3:
        exit(0);
      default:
        printf("\nInvalid Choice");
        break;
      }
    }
  }
  void login(char username[], char password[]) {
    fflush(stdin);
    int i, flag1 = 0, flag2 = 0;
    char id[20], pass[20];
    yellow();
    printf("\t\tWelcome to Login Portal\n");
    reset();
    green();
    printf("\nEnter username : ");
    reset();
    fgets(id, 20, stdin);
    int len = strlen(id);
    if (len > 0 && id[len - 1] == '\n')
      id[len - 1] = '\0';
    green();
    printf("\nEnter password : ");
    reset();
    fgets(pass, 20, stdin);
    int len1 = strlen(pass);
    if (len1 > 0 && pass[len1 - 1] == '\n')
      pass[len1 - 1] = '\0';
    if (strcmp(id, username) == 0)
      flag1 = 1;
    if (strcmp(pass, password) == 0)
      flag2 = 1;
    if (flag1 == 1 && flag2 == 1) {
      blue();
      printf("\n\t\tlogin successful\n");
      reset();
    } else {
      red();
      printf("\n\t\tbad credentials , login failed\n");
      reset();
    }
    getch();
    system("cls");
  }
  void SignUp(char username[], char password[]) {
    fflush(stdin);
    yellow();
    printf("\t\tWelcome to SignUp Portal\n");
    reset();
    green();
    printf("\nEnter username : ");
    reset();
    fgets(username, 20, stdin);
    int len = strlen(username);
    if (len > 0 && username[len - 1] == '\n')
      username[len - 1] = '\0';
    green();
    printf("\nEnter password : ");
    reset();
    fgets(password, 20, stdin);
    int len1 = strlen(password);
    if (len1 > 0 && password[len1 - 1] == '\n')
      password[len1 - 1] = '\0';
    blue();
    printf("\n\t\tThank you for signing up\n");
    reset();
    getch();
    system("cls");
  }
  void red() { printf("\033[1;31m"); }
  void yellow() { printf("\033[1;33m"); }
  void reset() { printf("\033[0m"); }
  void blue() { printf("\033[0;34m"); }
  void green() { printf("\033[0;32m"); }
