struct Employee {
  int id;
  char name[50];
  float salary;
};
struct Employee input(struct employee);

// function to take input employee data from the user

struct Employee input(struct employee b) {
  printf("Enter employee id : ");
  scanf("%d", &b.id);
  printf("\nEnter employee name : ");
  fgets(b.name, 50, stdin);
  printf("\nEnter employee salary : ");
  scanf("%f", &b.salary);
  return b;
}
void display(struct employee);

// function to display employee data

void display(struct employee b) {
  printf("employee id = %d", b.id);
  printf("\nemployee name = %s", b.name);
  printf("\nemployee salary = %f", b.salary);
}
struct employee {
  int id;
  char name[50];
  float salary;
};
void highest_salary(struct employee[], struct employee, int);

// function to find the highest salary employee from a given array of 10
// employees

void highest_salary(struct employee b[], struct employee a, int size) {
  a.salary = 0;
  int i;
  for (i = 0; i < size; i++) {
    if (a.salary < b[i].salary)
      a = b[i];
  }
  printf("\nHighest salary employee is %s", a.name);
  printf("\nSalary = %f", a.salary);
}
struct employee {
  int id;
  char name[50];
  float salary;
};
void sort_names(struct employee b[], struct employee temp, int size);

// function to sort employees according to their names

void sort_names(struct employee b[], struct employee temp, int size) {
  for (int i = 0; i < size; i++)
    for (int j = i + 1; j < size; j++) {
      if (strcmp(b[i].name, b[j].name) > 0) {
        temp = b[j];
        b[j] = b[i];
        b[i] = temp;
      }
    }
  for (int i = 0; i <= size - 1; i++)
    printf("\n%d %s %f", b[i].id, b[i].name, b[i].salary);
}
#include <stdio.h>
#include <string.h>
struct students {
  char name[50], section[20];
  int roll_no, class;
};
int main() {
  struct students a[10];
  for (int i = 0; i < 10; i++) {
    printf("Enter name : ");
    fflush(stdin);
    fgets(a[i].name, 50, stdin);
    int len = strlen(a[i].name);
    if (len > 0 && a[i].name[len - 1] == '\n')
      a[i].name[len - 1] = '\0';
    printf("Enter class : ");
    scanf("%d", &a[i].class);
    printf("Enter section : ");
    fflush(stdin);
    fgets(a[i].section, 20, stdin);
    int length = strlen(a[i].section);
    if (length > 0 && a[i].section[length - 1] == '\n')
      a[i].section[length - 1] = '\0';
    printf("Enter roll no. : ");
    scanf("%d", &a[i].roll_no);
    printf("\n");
  }
  printf("\nDisplaying student information :\n");
  for (int i = 0; i < 10; i++) {
    printf("\nName     : %s", a[i].name);
    printf("\nClass    : %d", a[i].class);
    printf("\nSection  : %s", a[i].section);
    printf("\nRoll No. : %d\n", a[i].roll_no);
  }
  return 0;
}

char name[50], section[20];
int roll_no, class;
}
;
int main() {
  int n;
  printf("Enter no. of students for storing information : ");
  scanf("%d", &n);
  struct students a[n];
  for (int i = 0; i < n; i++) {
    printf("\nEnter name : ");
    fflush(stdin);
    fgets(a[i].name, 50, stdin);
    int len = strlen(a[i].name);
    if (len > 0 && a[i].name[len - 1] == '\n')
      a[i].name[len - 1] = '\0';
    printf("Enter class : ");
    scanf("%d", &a[i].class);
    printf("Enter section : ");
    fflush(stdin);
    fgets(a[i].section, 20, stdin);
    int length = strlen(a[i].section);
    if (length > 0 && a[i].section[length - 1] == '\n')
      a[i].section[length - 1] = '\0';
    printf("Enter roll no. : ");
    scanf("%d", &a[i].roll_no);
  }
  printf("\nDisplaying students information :\n");
  for (int i = 0; i < n; i++) {
    printf("\nName     : %s", a[i].name);
    printf("\nClass    : %d", a[i].class);
    printf("\nSection  : %s", a[i].section);
    printf("\nRoll No. : %d\n", a[i].roll_no);
  }
  return 0;
  int n;
  printf("Enter no. of students for storing information : ");
  scanf("%d", &n);
  struct students a[n];
  for (int i = 0; i < n; i++) {
    printf("\nEnter name : ");
    fflush(stdin);
    fgets(a[i].name, 50, stdin);
    int len = strlen(a[i].name);
    if (len > 0 && a[i].name[len - 1] == '\n')
      a[i].name[len - 1] = '\0';
    printf("Enter class : ");
    scanf("%d", &a[i].class);
    printf("Enter section : ");
    fflush(stdin);
    fgets(a[i].section, 20, stdin);
    int length = strlen(a[i].section);
    if (length > 0 && a[i].section[length - 1] == '\n')
      a[i].section[length - 1] = '\0';
    printf("Enter roll no. : ");
    scanf("%d", &a[i].roll_no);
  }
  printf("\nDisplaying students information :\n");
  for (int i = 0; i < n; i++) {
    printf("\nName     : %s", a[i].name);
    printf("\nClass    : %d", a[i].class);
    printf("\nSection  : %s", a[i].section);
    printf("\nRoll No. : %d\n", a[i].roll_no);
  }
  return 0;
}
struct marks {
  char name[50];
  int roll_no, chem_marks, maths_marks, phy_marks;
};
int main() {
  struct marks a[5];
  float percentage[5];
  for (int i = 0; i < 5; i++) {
    printf("\nEnter name : ");
    fflush(stdin);
    fgets(a[i].name, 50, stdin);
    int len = strlen(a[i].name);
    if (len > 0 && a[i].name[len - 1] == '\n')
      a[i].name[len - 1] = '\0';
    printf("Enter roll no. : ");
    scanf("%d", &a[i].roll_no);
    printf("Enter chemistry marks : ");
    scanf("%d", &a[i].chem_marks);
    printf("Enter maths marks : ");
    scanf("%d", &a[i].maths_marks);
    printf("Enter physics marks : ");
    scanf("%d", &a[i].phy_marks);
    int total = a[i].chem_marks + a[i].maths_marks + a[i].phy_marks;
    percentage[i] = (total * 100) / 300.0;
  }
  printf("\nDisplaying students percentage :\n");
  for (int i = 0; i < 5; i++) {
    printf("\nName       : %s", a[i].name);
    printf("\nRoll No.   : %d", a[i].roll_no);
    printf("\nPercentage : %f\n", percentage[i]);
  }
  return 0;
}
struct time {
  int hour, minute, second;
};
int main() {
  struct time a, b, difference;
  printf("\nstart time :-");
  printf("\nEnter hour , minute and second : \n");
  scanf("%d %d %d", &a.hour, &a.minute, &a.second);
  printf("\nend time :-");
  printf("\nEnter hour , minute and second : \n");
  scanf("%d %d %d", &b.hour, &b.minute, &b.second);

  if (b.second < a.second) {
    b.second = b.second + 60;
    b.minute = b.minute - 1;
  }
  if (b.minute < a.minute) {
    b.minute = b.minute + 60;
    b.hour = b.hour - 1;
  }
  if (b.hour < a.hour)
    b.hour = b.hour + 12;

  difference.hour = b.hour - a.hour;
  difference.minute = b.minute - a.minute;
  difference.second = b.second - a.second;

  printf("\ntime difference is %d hours : %d minutes : %d seconds",
         difference.hour, difference.minute, difference.second);
  struct students s[10];
  for (int i = 0; i < 10; i++) {
    printf("Enter name : ");
    fflush(stdin);
    fgets(s[i].name, 50, stdin);
    int len = strlen(s[i].name);
    if (len > 0 && s[i].name[len - 1] == '\n')
      s[i].name[len - 1] = '\0';
    printf("Enter class : ");
    scanf("%d", &s[i].class);
    printf("Enter section : ");
    fflush(stdin);
    fgets(s[i].section, 20, stdin);
    int length = strlen(a[i].section);
    if (length > 0 && s[i].section[length - 1] == '\n')
      s[i].section[length - 1] = '\0';
    printf("Enter roll no. : ");
    scanf("%d", &s[i].roll_no);
    printf("\n");
  }
  printf("\nDisplaying student information :\n");
  for (int i = 0; i < 10; i++) {
    printf("\nName     : %s", s[i].name);
    printf("\nClass    : %d", s[i].class);
    printf("\nSection  : %s", s[i].section);
    printf("\nRoll No. : %d\n", s[i].roll_no);
  }
  return 0;
}
struct student {
  char name[50];
  int class;
  char section[20];
  int roll_no;
};

int main() {
  int n;
  printf("Enter no. of students for storing information: ");
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid input. Please enter a valid positive number.\n");
    return 1;
  }

  // Declare an array of students
  struct student m[n];

  // Clear input buffer
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;

  // Input student information
  for (int i = 0; i < n; i++) {
    printf("\nEnter name: ");
    if (fgets(m[i].name, 50, stdin) == NULL) {
      printf("Error reading input.\n");
      return 1;
    }

    // Remove newline if present
    int len = strlen(m[i].name);
    if (len > 0 && m[i].name[len - 1] == '\n')
      m[i].name[len - 1] = '\0';

    printf("Enter class: ");
    if (scanf("%d", &m[i].class) != 1) {
      printf("Invalid input for class. Please enter a valid integer.\n");
      return 1;
    }

    // Clear input buffer
    while ((c = getchar()) != '\n' && c != EOF)
      ;

    printf("Enter section: ");
    if (fgets(m[i].section, 20, stdin) == NULL) {
      printf("Error reading input.\n");
      return 1;
    }

    // Remove newline if present
    len = strlen(m[i].section);
    if (len > 0 && m[i].section[len - 1] == '\n')
      m[i].section[len - 1] = '\0';

    printf("Enter roll no.: ");
    if (scanf("%d", &m[i].roll_no) != 1) {
      printf("Invalid input for roll no. Please enter a valid integer.\n");
      return 1;
    }

    // Clear input buffer
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  }

  // Display student information
  printf("\nDisplaying students information:\n");
  for (int i = 0; i < n; i++) {
    printf("\nName     : %s", m[i].name);
    printf("\nClass    : %d", m[i].class);
    printf("\nSection  : %s", m[i].section);
    printf("\nRoll No. : %d\n", m[i].roll_no);
  }
  struct marks a[5];
  float percentage[5];
  for (int i = 0; i < 5; i++) {
    printf("\nEnter name : ");
    fflush(stdin);
    fgets(a[i].name, 50, stdin);
    int len = strlen(a[i].name);
    if (len > 0 && a[i].name[len - 1] == '\n')
      a[i].name[len - 1] = '\0';
    printf("Enter roll no. : ");
    scanf("%d", &a[i].roll_no);
    printf("Enter chemistry marks : ");
    scanf("%d", &a[i].chem_marks);
    printf("Enter maths marks : ");
    scanf("%d", &a[i].maths_marks);
    printf("Enter physics marks : ");
    scanf("%d", &a[i].phy_marks);
    int total = a[i].chem_marks + a[i].maths_marks + a[i].phy_marks;
    percentage[i] = (total * 100) / 300.0;
  }
  printf("\nDisplaying students percentage :\n");
  for (int i = 0; i < 5; i++) {
    printf("\nName       : %s", a[i].name);
    printf("\nRoll No.   : %d", a[i].roll_no);
    printf("\nPercentage : %f\n", percentage[i]);
  }
  return 0;
}