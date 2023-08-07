#include<stdio.h>
int main () { 
 int i = 1 , n , sum = 0 ;
 printf("Enter a number : ") ;
 scanf("%d" , &n) ;
 while (i<=n)
 {
     sum = sum + i ;
     i++ ;
 }
printf("Sum of first %d natural numbers is %d " , n , sum ) ; 

  //Q2 Answer here
  int a = 2 , b , sum2 = 0 ;
printf("Enter number : ") ;
scanf("%d" , &b) ;
while (a<=2*b)
{
    if (a%2 == 0)
    {
        sum2 = sum2 + i ;
        a++ ;
    }
    else
    {
        a++ ;
    }
}
printf("Sum of first %d even natural numbers is %d " , b ,sum2);

  //Q3 Answer here
int c = 1 , d , s = 0 ;
printf("Enter number : ") ;
scanf("%d" , &d) ;
while (c<2*d)
{
    if (c%2 != 0)
    {
        s = s + c ;
        c++ ;
    }
    else
    {
        c++ ;
    }
}
printf("Sum of first %d odd natural numbers is %d " , c ,s) ;

  //Q4 Answer here
  int e = 1 , f , sum1 = 0 ;
printf("Enter a number : ") ;
scanf("%d" , &f) ;
while (e<=f)
{
    sum1 = sum1 + (e*e) ;
    e++ ;
}
printf("Sum of squares of first %d natural numbers is %d " , f , sum1) ;

  // Q5 Answer here
    int index = 1, number, sumOfCubes = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (index <= number) {
        sumOfCubes = sumOfCubes + (index * index * index);
        index++;
    }

    printf("Sum of cubes of first %d natural numbers is %d\n", number, sumOfCubes);

  //Q6 Answer here
    int num, factorial = 1, originalNumber;
    printf("Enter a number for factorial: ");
    scanf("%d", &num);
    originalNumber = num;

    while (num >= 1) {
        factorial *= num;
        num--;
    }

    printf("Factorial of %d is %d", originalNumber, factorial);

  //Q7 Answer here
   int digitCount = 0;
    long long int inputNumber;
    printf("Enter a number: ");
    scanf("%lld", &inputNumber);

    long long int numnew = inputNumber; // Create a copy of inputNumber for the calculation

    while (numnew != 0) {
        numnew = numnew / 10;
        digitCount++;
    }

    printf("Number of digits in the given number is %d", digitCount);

  //Q8 Answer here
    int isPrime = 0; // 0 indicates not prime, 1 indicates prime
    int number1;

    printf("Enter a number: ");
    scanf("%d", &number1);

    for (int i = 2; i < number; i++) {
        if (number1 % i == 0) {
            isPrime = 1;
            break;
        }
    }

    if (isPrime) {
        printf("%d is not a prime number", number1);
    } else {
        printf("%d is a prime number", number1);
    }

  //Q9 Answer here
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= (num1 * num2); i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            printf("\nLCM is %d", lcm);
            break;
        }
    }
  
  //Q10 Answer here
  int  n1 , y ;
printf("Enter a number : ") ;
scanf("%d" , &n1) ;
printf("The reversed number is : ") ;
while (n1!=0)
{
    y = n1 % 10 ;
    n = n1/10 ;
    printf("%d" , y) ;
}
return 0 ;
}