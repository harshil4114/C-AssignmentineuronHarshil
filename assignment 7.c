#include<stdio.h>
int main () { 
int n , n1 = -1 , n2 = 1 , Nth ;
printf("Enter term for fibonacci series : ") ;
scanf("%d" , &n) ;
for(int i=1 ; i<=n ; i++)
{
    Nth = n1 + n2 ;
    n1 = n2 ;
    n2 = Nth ;
}
printf("The %dth term of fibonacci series is %d " , n , Nth) ;
  
  //Q2 Answer here
  
int terms, firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    printf("The required Fibonacci series is: %d %d ", firstTerm, secondTerm);

    for (int i = 3; i <= terms; i++) {
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        printf("%d ", nextTerm);
    }

  //Q3 Answer here

  int numToCheck, prevTerm = -1, currentTerm = 1, next;

    printf("Enter a number to check if it is present in the Fibonacci series: ");
    scanf("%d", &numToCheck);

    for (int i = 1; i <= numToCheck + 2; i++) {
        next = prevTerm + currentTerm;
        prevTerm = currentTerm;
        currentTerm = next;
        if (next == numToCheck) {
            break;
        }
    }

    if (next == numToCheck) {
        printf("\nThe number %d is a term of the Fibonacci series.\n", numToCheck);
    } else {
        printf("\nThe number %d is not a term of the Fibonacci series.\n", numToCheck);
    }

  //Q4 Answer here

   int num1, num2, divisor, greatestCommonDivisor, minNum;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 < num2) {
        minNum = num1;
    } else {
        minNum = num2;
    }

    for (divisor = 1; divisor <= minNum; divisor++) {
        if ((num1 % divisor == 0) && (num2 % divisor == 0)) {
            greatestCommonDivisor = divisor;
        }
    }

    printf("\nThe greatest common divisor is %d\n", greatestCommonDivisor);

  //Q5 Answer here

  int numb1, numb2, divisornew, gcdCandidate, min_Num;

    printf("Enter two numbers: ");
    scanf("%d%d", &numb1, &numb2);

    if (numb1 < numb2) {
        min_Num = numb1;
    } else {
        min_Num = numb2;
    }

    for (divisornew = 1; divisornew <= min_Num; divisornew++) {
        if ((numb1 % divisornew == 0) && (numb2 % divisornew == 0)) {
            gcdCandidate = divisornew;
        }
    }

    if (gcdCandidate == 1) {
        printf("\n%d and %d are co-prime numbers.\n", numb1, numb2);
    } else {
        printf("\n%d and %d are not co-prime numbers.\n", numb1, numb2);
    }

  //Q6 Answer here

  int num, isPrime, divisor;

    printf("Prime numbers under 100 are: ");
    
    for (num = 2; num <= 100; num++) {
        isPrime = 0;
        for (divisor = 2; divisor < num; divisor++) {
            if (num % divisor == 0) {
                isPrime = 1;
                break;
            }
        }
        if (isPrime == 0) {
            printf("%d ", num);
        }
    }

  
  //Q7 Answer here
  int startNum, endNum;

    printf("Enter two numbers to print all prime numbers between them: ");
    scanf("%d%d", &startNum, &endNum);

    printf("\nPrime numbers between %d and %d are: ", startNum, endNum);

    for (int num = startNum + 1; num < endNum; num++) {
        int isPrime = 1;
        for (int divisor = 2; divisor < num; divisor++) {
            if (num % divisor == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", num);
        }
    }

  //Q8 Answer here

    int givenNum, nextPrime, isPrimenew, divisor2;

    printf("Enter a number to print the prime number next to it: ");
    scanf("%d", &givenNum);

    for (nextPrime = givenNum + 1; ; nextPrime++) {
        isPrimenew = 0;
        for (divisor = 2; divisor < nextPrime; divisor2++) {
            if (nextPrime % divisor == 0) {
                isPrime = 1;
                break;
            }
        }
        if (isPrimenew == 0) {
            printf("Next prime number to %d is %d\n", givenNum, nextPrime);
            break;
        }
    }

  //Q9 Answer here
   int x , sum = 0 , k , temp , j;
    printf("Enter a number : ") ;
    scanf("%d" , &x) ;
    // count digits in the number
    temp = x ;
    for( j = 0 ; temp != 0 ; j++ )
    {
        temp = temp / 10 ;
    
    }
    
    // main code for summation of digits
    
    for(int i = x ; i>0 ; )
    {
        k = 1 ;
        // loop for powering the digits
        for(int b=j ; b!=0 ; b--)
        {
            k = k * (i % 10) ;
        }
        sum = sum + k ;
        i = i / 10 ;
    }
    if(sum==x)
    printf("\n%d is an armstrong number\n" ,x) ;
    else
    printf("\n%d is not an armstrong number\n" ,x) ;

  //Q10 Answer here

   int number, sum2, numDigits, temp2, digit;
    printf("All Armstrong numbers under 1000 are:\n");
    
    for (number = 1; number <= 1000; number++) {
        sum2 = 0;
        
        // Count digits in the number
        temp = number;
        for (numDigits = 0; temp2 != 0; numDigits++) {
            temp = temp / 10;
        }
        
        // Main code for summation of digits
        for (int i = number; i > 0; ) {
            int poweredDigit = 1;
            // Loop for powering the digits
            for (int b = numDigits; b != 0; b--) {
                poweredDigit = poweredDigit * (i % 10);
            }
            sum2 = sum2 + poweredDigit;
            i = i / 10;
        }
        
        if (sum2 == number) {
            printf("%d ", number);
        }
    }
    
  
return 0 ; 
}