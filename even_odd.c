#include<stdio.h>
int main(void)
{
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a%2 == 0)
    {
    printf("The Number is even \n");
    }
    else
    {
    printf("The Number is odd \n");
    }
    return 0;
}