/*#include<stdio.h>
int  sum(int num)
{
    int s = 0,r;
    if(num/10==0)
    {
        return num;
    }
    else
    {
        r =  num%10;
        s+= r;
        num/=10;
        return sum(num);
    }
    printf("%d ",s);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    //printf("\nThe sum of the digits is = ");
    sum(n);
    return 0;
}*/
#include <stdio.h>
 
// Function to check sum of digit using recursion
int sum_of_digit(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}
 
// Driven Program to check above
int main()
{
    int num = 78142;
    int result = sum_of_digit(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}