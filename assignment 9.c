#include <stdio.h>
int main() {
  int n;
  printf("Enter month number to know number of days in it : ");
  scanf("%d", &n);
  switch (n) {
  case 1:
    printf("\nNumber of days - 31\n");
    break;
  case 2:
    printf("\nNumber of days - 28\n");
    break;
  case 3:
    printf("\nNumber of days - 31\n");
    break;
  case 4:
    printf("\nNumber of days - 30\n");
    break;
  case 5:
    printf("\nNumber of days - 31\n");
    break;
  case 6:
    printf("\nNumber of days - 30\n");
    break;
  case 7:
    printf("\nNumber of days - 31\n");
    break;
  case 8:
    printf("\nNumber of days - 31\n");
    break;
  case 9:
    printf("\nNumber of days - 30\n");
    break;
  case 10:
    printf("\nNumber of days - 31\n");
    break;
  case 11:
    printf("\nNumber of days - 30\n");
    break;
  case 12:
    printf("\nNumber of days - 31\n");
    break;
  default:
    printf("\nInvalid Entry\n");
    break;
  }
  getch();
  return 0;
}

// Q2 Answer here

int n;
float a, b, add = 0, subtract = 0, multiply = 0, divide = 0;
while (1) {
  printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. "
         "Exit\n\n");
  printf("Choose an option to perform task : ");
  scanf("%d", &n);
  switch (n) {
  case 1:
    printf("\nEnter two numbers : ");
    scanf("%f %f", &a, &b);
    add = a + b;
    printf("\nResult is %f", add);
    break;
  case 2:
    printf("\nEnter two numbers : ");
    scanf("%f %f", &a, &b);
    subtract = a - b;
    printf("\nResult is %f", subtract);
    break;
  case 3:
    printf("\nEnter two numbers : ");
    scanf("%f %f", &a, &b);
    multiply = a * b;
    printf("\nResult is %f", multiply);
    break;
  case 4:
    printf("\nEnter two numbers : ");
    scanf("%f %f", &a, &b);
    divide = a / b;
    printf("\nResult is %f", divide);
    break;
  case 5:
    printf("\nThank You\n\n");
    exit(0);
    break;
  default:
    printf("\nInvalid Choice\nPlease enter again\n");
    break;
  }
  getch();
  system("cls");
}

// Q3 Answer here
{
  int n;
  printf("\nEnter day number of week : ");
  scanf("%d", &n);
  switch (n) {
  case 1:
    printf("\nDay - Monday\n");
    printf("\nMondays are great to greet a new week full of optimism.");
    break;
  case 2:
    printf("\nDay - Tuesday\n");
    printf("\nSaying 'Yes' to positivity leaves no room for 'Negative "
           "Thoughts'.Happy Tuesday. ");
    break;
  case 3:
    printf("\nDay - Wednesday\n");
    printf("\nHope your day is full with wonderful things. You have a great "
           "Wednesday.");
    break;
  case 4:
    printf("\nDay - Thursday\n");
    printf("\nHaving positive thoughts in the morning can set the mood of your "
           "whole day. Happy Thursday!");
    break;
  case 5:
    printf("\nDay - Friday\n");
    printf(
        "\nFriday is always good because it marks the beginning of a weekend.");
    break;
  case 6:
    printf("\nDay - Saturday\n");
    printf("\nHappy Saturday! Wishing you an excellent day and a great time "
           "ahead.");
    break;
  case 7:
    printf("\nDay - Sunday\n");
    printf("\nSunday clears away the rust of the whole week.");
    break;
  default:
    printf("\nInvalid Entry");
    break;
  }
  printf("\n");
  getch();

  // Q4 Answer here
  float side1, side2, side3, leg1, leg2, hypotenuse;
  int choice;

  while (1) {
    printf("\nCheck whether lengths are of : \n");
    printf("\n1. Isosceles triangle \n2. Right angled triangle \n3. "
           "Equilateral triangle \n4. Exit \n");
    printf("\nChoose an option to perform the task: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("\nEnter the lengths of the triangle: ");
      scanf("%f %f %f", &side1, &side2, &side3);
      if (side1 == side2 || side2 == side3 || side3 == side1)
        printf("It is an isosceles triangle");
      else
        printf("It isn't an isosceles triangle");
      break;
    case 2:
      printf("\nEnter the lengths of the triangle: ");
      scanf("%f %f %f", &leg1, &leg2, &hypotenuse);
      if ((leg1 * leg1) + (leg2 * leg2) == (hypotenuse * hypotenuse) ||
          (leg1 * leg1) + (hypotenuse * hypotenuse) == (leg2 * leg2) ||
          (leg2 * leg2) + (hypotenuse * hypotenuse) == (leg1 * leg1))
        printf("It is a right-angled triangle");
      else
        printf("It is not a right-angled triangle");
      break;
    case 3:
      printf("\nEnter the lengths of the triangle: ");
      scanf("%f %f %f", &side1, &side2, &side3);
      if (side1 == side2 && side2 == side3)
        printf("It is an equilateral triangle");
      else
        printf("It isn't an equilateral triangle");
      break;
    case 4:
      printf("\nThank You\n");
      exit(0);
      break;
    default:
      printf("\nInvalid choice\n");
      break;
    }

    getchar(); // Clear the newline character
    system("cls");
  }

  // Q5 Answer here

  int var;
  printf("Enter a number : ");
  scanf("%d", &var);
  switch (var) {
  case 1:
    printf("\ngood");
    break;
  case 2:
    printf("\nbetter");
    break;
  case 3:
    printf("\nbest");
    break;

  default:
    printf("\nInvalid");
    break;
  }

  // Q6 Answer here

  int inputYear, isLeapYear;

  printf("Enter a year: ");
  scanf("%d", &inputYear);

  isLeapYear =
      (inputYear % 4 == 0) && (inputYear % 400 == 0) || (inputYear % 100 != 0);

  switch (isLeapYear) {
  case 1:
    printf("%d is a leap year", inputYear);
    break;
  case 0:
    printf("%d is not a leap year", inputYear);
    break;
  default:
    printf("Invalid entry");
    break;

    // Q7 Answer here

    int units;
    float total, bill;
    printf("Enter units consumed : ");
    scanf("%d", &units);
    switch (units) {
    case 0 ... 50:
      total = 0.50 * units;
      bill = total + (0.2 * total);
      printf("\nTotal electricity bill is Rs.%f", bill);
      break;

    case 51 ... 150:
      total = (0.50 * 50) + (0.75 * (units - 50));
      bill = total + (0.2 * total);
      printf("\nTotal electricity bill is Rs.%f", bill);
      break;

    case 151 ... 250:
      total = (0.50 * 50) + (0.75 * 100) + (1.20 * (units - 150));
      bill = total + (0.2 * total);
      printf("\nTotal electricity bill is Rs.%f", bill);
      break;

    case 251 ... 2147483647:
      total =
          (0.50 * 50) + (0.75 * 100) + (1.20 * 100) + (1.50 * (units - 250));
      bill = total + (0.2 * total);
      printf("\nTotal electricity bill is Rs.%f", bill);
      break;
    }

    // Q8 Answer here
    int n, a, b;
    printf("Enter choice :\n");
    printf("1. Convert negative to positive number\n");
    printf("2. Convert positive to negative number\n\n");
    scanf("%d", &n);
    switch (n) {
    case 1:
      printf("Enter a number : ");
      scanf("%d", &a);
      if (a > 0) {
        printf("Error ! wrong entry , enter negative number\n");
        break;
      } else
        a = a * (-1);
      printf("\nconverted positive number is %d", a);
      break;

    case 2:
      printf("Enter a number : ");
      scanf("%d", &b);
      if (b < 0) {
        printf("Error ! wrong entry , enter positive number\n");
        break;
      } else
        b = b * (-1);
      printf("\nconverted negative number is %d", b);
      break;

    default:
      printf("\nInvalid entry");
      break;

      // Q9 Answer here
      int n;
      printf("Enter a number : ");
      scanf("%d", &n);
      switch (n % 2 == 0) {
      case 1:
        n = n + 1;
        printf("\nupper nearest odd number is %d", n);
        break;

      case 0:
        printf("\nInvalid entry !\nEnter even number");
        break;
      }

      // Q10 Answer here
      int a, b, c, D;

      printf("To find the nature of roots:\n");
      printf("Enter the value of a: ");
      scanf("%d", &a);
      printf("Enter the value of b: ");
      scanf("%d", &b);
      printf("Enter the value of c: ");
      scanf("%d", &c);

      D = b * b - 4 * a * c;

      switch (D > 0) {
      case 1:
        printf("\nThe roots are real and distinct");
        break;

      case 0:
        switch (D == 0) {
        case 1:
          printf("\nThe roots are real and equal");
          break;

        case 0:
          switch (D < 0) {
          case 1:
            printf("\nThe roots are distinct and imaginary");
            break;
          }
        }
      }
