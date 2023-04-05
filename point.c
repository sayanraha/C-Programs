/*Write a Program to find the big value of two given numbers.*/
#include<stdio.h>
int main()
{
    int a,b;
    int *ptr,*ptr1,*big;
    printf("\n Enter the first number \n");
    scanf("%d",&a);
    printf("\n Enter the second number \n");
    scanf("%d",&b);
    ptr = &a;
    ptr1 = &b;
    if(*ptr>*ptr1)
    {
        big = ptr;
    }
    else
    {
        big = ptr1;
    }
    printf("\n THE BIG VALUE OF TWO GIVEN NUMBERS IS : %d",*big);
    return 0;
}