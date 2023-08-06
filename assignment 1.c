#include <stdio.h>
#include <string.h>

// Function to find the area of the circle
float calculateCircleArea(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    // 1. Print "Hello Students" on the screen
    printf("1. Hello Students\n");

    // 2. Print "Hello" in the first line and "Students" in the second line
    printf("2. Hello\n");
    printf("   Students\n");

    // 3. Print "iNeuron" on the screen (in double quotes)
    printf("3. \"iNeuron\"\n");

    // 4. Find the area of the circle
    float radius, area;
    printf("4. Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = calculateCircleArea(radius);
    printf("   Area of circle is %.2f", area, radius);

    // 5. Calculate the length of a String using the printf function
    char str[100];
    printf("5. Enter a string: ");
    scanf("%s", str);
    int length = printf("   %s\n", str);
    printf("   Length of the string: %d\n", length);

    // 6. Print the name of the user in double quotes
    char name[100];
    printf("6. Enter your name: ");
    scanf("%s", name);
    printf("   Hello, \"%s\"\n", name);

    // 7. Print "%d" on the screen
    printf("7. %%d\n");

    // 8. Print "\n" on the screen
    printf("8. \\n\n");

    // 9. Print "\\" on the screen
    printf("9. \\\\\n");

    // 10. Take a date as input in the given format and convert the date format
    int day, month, year;
    printf("10. Enter the date in format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("    Day - %02d, Month - %02d, Year - %d\n", day, month, year);

    // 11. Take time as input in the given format and convert the time format
    int hour, minute;
    printf("11. Enter the time in format HH:MM: ");
    scanf("%d:%d", &hour, &minute);
    printf("    %d hour and %d Minute\n", hour, minute);

    // 12. Find the output of the code
    int x = printf("12. ineuron");
    printf("\n    %d\n", x);

    return 0;
}
