#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d\n",&a);
    printf("Enter the second number\n");
    scanf("%d\n",&b);
    if(a>b)
    {
    printf("The required result is : %d\n",a-b);
    }
    else
    {
    printf("The required result is : %d\n",a+b);
    }
    return 0;
}