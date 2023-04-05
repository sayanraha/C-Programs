/*1) Write a menu-driven program to,
a) Calculate the factorial of a given number,
b) Check whether the number is prime or not,
c) Check whether the number is a palindrome or not.
Use different functions for each of the above tasks 
and call the functions from main() using switch statement.*/
#include<stdio.h>
#include<Math.h>
void factorial(int);
void primecheck(int);
void palincheck(int);
int main()
{
    int num,choice;
    printf("\n Enter a number \n");
    scanf("%d",&num);
    printf("\n Enter your choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : 
        factorial(num);
        break;
        case 2:
        primecheck(num);
        break;
        case 3:
        palincheck(num);
        break;
        default :
        printf("\n Wrong Choice\n");
    }
    return 0;
}
void factorial(int a)
{
    int fact = 1,i;
    for(i=a;i>=1;i--)
    {
        fact = fact * i;
    }
    printf("\n The Factorial of the number %d is = %d \n",a,fact);
}
void primecheck(int b)
{
    int i,count = 0;
    for(i=2;i<=sqrt(b);i++)
    {
        if(b%i==0)
        break;
    }
    if(i>sqrt(b))
    printf("\n %d is a prime number \n",b);
    else
    printf("\n %d is not a prime number \n",b);
}
void palincheck(int c)
{
    int rem,sum=0,n;
    n=c;
    while(n!=0)
    {
        rem = n%10;
        sum = sum*10+rem;
        n/=10;
    }
    if(c==sum)
    printf("\n %d is a Paindrome Number \n",c);
    else
    printf("\n %d is not a Paindrome Number \n",c);
}