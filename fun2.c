#include<stdio.h>
long int factorial(int x);//Program to find the factorial of a number using Functions
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("No factorial for negative number\n");
    }
    else
    {
        printf("Factorial of %d is %ld",num,factorial(num));
    }                                       //Calling of function
    return 0;
}
long int  factorial(int x)//Called Function
{
    int i;
    long int fact = 1;
    if(x==0)
    {
        return 1;
    }
    else
    {
        for(i=x;i>1;i--)
        
        fact*= i;
        return fact;
    }
}