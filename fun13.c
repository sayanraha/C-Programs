#include<stdio.h>
int prodDigits()
{
    int num;
    printf("Enter a number :-\n");
    scanf("%d",&num);
    int r,pro = 1;
    while(num>0)
    {
        r = num%10;
        pro = pro * r;
        num/=10;
    }
    return pro;
}
int main()
{
    printf("The Product of Digits of the number is = %d",prodDigits());
}