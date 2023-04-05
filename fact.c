#include<stdio.h>
int main()
{
    int num,fact = 1;
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num > 0)
    {
       fact = fact * num;
       num = num-1;
    }
    printf("The factorial of the number is = %d\n",fact);
    return 0;
}