/*Write a C program to determine whether a given number is prime or not.
Test Data :
Input a number: 13
Expected Output :
13 is a prime number.*/
#include<stdio.h>
#include<Math.h>
int main()
{
    int i,n;
    printf("Input a number : ");
    scanf("%d",&n);
    printf("\n");
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        break;
    }
        if(i>sqrt(n))
        {
            printf("%d is a prime number",n);
        }
        else
        {
            printf("%d is not a prime number",n);
        }
}