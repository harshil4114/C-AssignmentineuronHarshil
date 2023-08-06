#include <stdio.h>
int main()
{
  //Q1 answer here
int a ;
printf("Enter a number : ") ;
scanf("%d", &a) ;
if(a>0)
{printf("\nnumber is positive\n");
}
else
{
printf("\nnumber is non positive\n");
}

  //Q2 answer here
  int b ;
printf("Enter a number : ");
scanf("%d",&b);
if(b%5==0)
{
printf("\nnumber is divisible by 5 \n");
}
else
{
printf("\nnumber isn't divisible by 5 \n");
}

  
 //Q3 answer here
  int c ;
printf("\nEnter a number : ");
scanf("%d" , &c);
if(c%2==0){
printf("\nnumber is even\n");
}
else{
printf("\nnumber is odd\n");
}

  
  //Q4 answer here
  int d , e ;
printf("\nEnter a number : ");
scanf("%d" , &d);
e = d / 2 ;
if(e*2==d){
printf("\nnumber is even\n");
}
else{
  printf("\nnumber is odd\n");
}
  
  //Q5 answer here
 int f ;
printf("enter a number : ");
scanf("%d" , &f);
if(f>=100 && f<=999)
printf("%d is a three digit number\n" , f);
else
printf("%d isn't a three digit number\n" , f);

  
  //Q6 answer here
  int g , h ;
printf("\nEnter values of g and h : ");
scanf("%d%d" , &g , &h);
if(g>h){
printf("\n%d is greater than %d\n", g );
}
if(h>g){
printf("\n%d is greater than %d\n", h , g);
}
if(g==h){
printf("\nboth are equal : %d\n" , g);
}

  
  //Q7 answer here
  int i , j , k , l ;
printf("\nenter value of i : ");
scanf("%d", &i);
printf("\nenter value of j : ");
scanf("%d", &j);
printf("\nenter value of k : ");
scanf("%d", &k);
l = j*j - 4*i*k ;
if(l>0)
{
  printf("\nroots are real and distinct\n");
}
if(l<0)
{
  printf("\nroots are imaginary\n");
}
if(l==0)
{
  printf("\nroots are real and equal\n");
}

  //Q8 answer here
  int year ;
printf("\nEnter year : ") ;
scanf("%d" , &year) ;
if(year%100==0)
{
    if(year%400==0)
    printf("%d is leap year" , year) ;
    else
    printf("%d is not leap year" , year) ;
}
else
{
    if(year%4==0)
    printf("%d is leap year" , year) ;
    else
    printf("%d is not leap year" , year) ;
}

  //Q9 answer here
  int no1 , no2 , no3;
printf("\nenter values of no1 and no2 and no3 : ");
scanf("%d%d%d" , &no1 , &no2 , &no3 );
if(no1>no2 && no1>no3)
{
printf("\n%d is greater than %d and %d\n",no1,no2,no3);
}
if(no2>no1 && no2>no3)
{
printf("\n%d is greater than %d and %d\n", no2,no1,no3);
}
if(no3>no1 && no3>no2)
{
printf("\n%d is greater than %d and %d\n", no3,no1,no2);
}
if(no1==no2&&no2==no3)
{
printf("\nall values are equal : %d\nplease select different values\n" , no1);
}
if(no1==no2 && no1>no3)
printf("\ntwo values are equal : %d\nand is greater than %d\n" ,no1,no3);
if(no1==no3 && no1>no2)
printf("\ntwo values are equal : %d\nand is greater than %d\n" , no1,no2);
if(no3==no2 && no3>no1)
printf("\ntwo values are equal : %d\nand is greater than %d\n" , no3 , no1);


  //Q10 answer here
   float CP , SP , profit , loss , profit_per , loss_per ;
    printf("\nEnter the cost price of the product : ");
    scanf("%f",&CP);
    printf("\nEnter the selling price of the product : ");
    scanf("%f" , &SP);
    profit = SP - CP ;
    loss = CP - SP ;
    profit_per = ( profit * 100 ) / CP ;
    loss_per = ( loss * 100 ) / CP ; 
    if( SP > CP )
    printf("The total profit percentage is %f " , profit_per);
    else
    printf("The total loss percentage is %f " , loss_per);
  return 0;

  
  //Q11 answer here
  int sub1 , sub2 ,sub3 , sub4 , sub5 , total ;
printf("enter marks for first subject out of 100 : ");
scanf("%d", &sub1);
printf("enter marks for second subject out of 100 : ");
scanf("%d", &sub2);
printf("enter marks for third subject out of 100 : ");
scanf("%d", &sub3);
printf("enter marks for fourth subject out of 100 : ");
scanf("%d", &sub4);
printf("enter marks for fifth subject out of 100 : ");
scanf("%d", &sub5);
total = sub1+sub2+sub3+sub4+sub5 ;
printf("\nPassing marks for each subject is 33\n");
if (sub1>=33 && sub2>=33 && sub3>=33 && sub4>=33 && sub5>=33)
{
if(total>=165)
printf("\nStudent has passed the exam\n");
}
else
printf("\nStudent has failed the exam because in any of the subjects, marks is less than the passing marks\n");

//Q12 answer here
  char ch ;
    printf("\nEnter a character : ") ;
    scanf("%c" , &ch);
    if(ch>='A' && ch<='Z')
    {
    printf("%c is an uppercase alphabet\n" , ch);
    }else if(ch>='a' && ch<='z')
    {
    printf("%c is a lowercase alphabet\n" , ch);
    }else
    {
    printf("%c is any other character\n" , ch) ;
    }

  
//Q13 answer here
  int no ;
printf("Enter a number : ");
scanf("%d",&no);
if(no%3==0 && no%2==0)
{
printf("\n%d is divisible by 3 and 2 \n" , no);
}
else
{
printf("\n%d isn't divisible by 3 and 2 \n" , no);
}

  //Q14 answer here
  int divino ;
printf("/nEnter a number : ");
scanf("%d",&divino);
if(divino%7==0 && divino%3==0)
{
printf("\n%d is divisible by 3 and 7 \n" , divino);
}
else if(divino%7==0)
{
printf("\n%d is divisible by 7 \n" , divino);
}
else if(divino%3==0)
{
printf("\n%d is divisible by 3 \n" , divino);
}

  //Q15 answer here
  int checkno;
printf("Enter a number : ") ;
scanf("%d", &checkno) ;
if(checkno==0)
{
printf("\nnumber is zero\n");
}
if(checkno>0)
{
printf("\nnumber is positive\n");
}
if(checkno<0)
{
printf("\nnumber is negative\n");
}

  //Q16 Answer here
   char chh ;
    printf("\nEnter a character : " );
    scanf("%c" , &chh);
    if( chh>='A' && chh<='Z')
    {
    printf("%c is an uppercase alphabet\n " , chh);
    }else if ( chh>='a' && chh<='z' )
    {
    printf("%c is a lowercase alphabet\n " , chh);
    }else if ( chh>='0' && chh<='9' )
    {
    printf("%c is a digit\n " , chh);
    }else
    {
    printf("%c is any other character\n " , chh);
    }

  //Q17 Answer here
   int s1 , s2 , s3 ;
    printf("\nEnter the sides of the triangle : ");
    scanf("%d%d%d" , &s1 , &s2 , &s3 ) ;
    if(s1==0 || s2==0 || s3==0)
    printf("\nthe triangle is not valid because it's one side is zero\n");
    else if( (s1+s2)>s3 && (s1+s3)>s2 && (s2+s3)>s1 )
    printf("\nthe triangle is valid\n");
    else
    printf("\nthe triangle is not valid\n");

  //Q18 Answer here
    int day ;
    printf("Enter month number to know number of days in it : ") ;
    scanf("%d" , &day) ;
    if(day>12 || day<1)
    printf("Invalid Choice\n") ;
    else if(day == 1)
    printf("Number of days - 31\n") ;
    else if(day == 2)
    printf("Number of days - 28\n") ;
    else if(day == 3)
    printf("Number of days - 31\n") ;
    else if(day == 4)
    printf("Number of days - 30\n") ;
    else if(day == 5)
    printf("Number of days - 31\n") ;
    else if(day == 6)
    printf("Number of days - 30\n") ;
    else if(day == 7)
    printf("Number of days - 31\n") ;
    else if(day == 8)
    printf("Number of days - 31\n") ;
    else if(day == 9)
    printf("Number of days - 30\n") ;
    else if(day == 10)
    printf("Number of days - 31\n") ;
    else if(day == 11)
    printf("Number of days - 30\n") ;
    else if(day == 12)
    printf("Number of days - 31\n") ;
    return 0 ;
  
  
}