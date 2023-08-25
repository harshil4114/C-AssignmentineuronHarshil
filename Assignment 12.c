#include<stdio.h>

void printNatural(int);
void printNatural(int num)
{
    if(num > 0)
    {
        printNatural(num - 1);
        printf("%d ", num);
    }
}


//Q2 Answer here
void printNatural_reverse(int);
void printNatural_reverse(int num)
{
    if(num > 0)
    {
        printf("%d ", num);
        printNatural_reverse(num - 1);
    }
}

//Q3 Answer here
void printNaturalOdd(int);
void printNaturalOdd(int num)
{
    if(num > 0)
    {
        printNaturalOdd(num - 1);
        printf("%d ", num * 2 - 1);
    }   
}



//Q4 Answer herew
void printNaturalOdd_rev(int);
void printNaturalOdd_rev(int num)
{
    if(num > 0)
    {
        printf("%d ", num * 2 - 1);
        printNaturalOdd_rev(num - 1);
    }   
}



//Q5 Answer here
void printNatEven(int);
void printNatEven(int num)
{
    if(num > 0)
    {
        printNatEven(num - 1);
        printf("%d ", num * 2);
    }   
}

//Q6 Answer here
void printNaturalEven_rev(int);
void printNaturalEven_rev(int n)
{
    if(n>0)
    {
        printf("%d ", n*2);
        printNaturalEven_rev(n-1);
    }   
}

//Q7 Answer here
void dec_to_bin(int);
void dec_to_bin(int n)
{
    if(n>0)
    {
        dec_to_bin(n/2);
        printf("%d", n%2);
    }   
} 
//Q8 Answer here
void dec_to_binary(int);
void dec_to_binary(int num)
{
    if(num > 0)
    {
        dec_to_bin(num / 2);
        printf("%d", num % 2);
    }   
}
//Q9 Answer here
void dec_to_oct(int);
void dec_to_oct(int n)
{
    if(n>0)
    {
        dec_to_oct(n/8);
        printf("%d", n%8);
    }   
} 
//Q10 Answer here
void reverse(int);
int sum = 0 , rem ;
void reverse(int num)
{
    if(num)
    {
        rem = num % 10 ;
        sum = sum * 10 + rem ;
        reverse(num/10);
    }
    else
    printf("%d", sum);
}







