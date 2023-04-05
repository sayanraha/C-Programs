#include<stdio.h>
int main()
{
    int num,p = 1,d;
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num>0)
    {
        d = num%10;
        p = p * d;
        num = num / 10;
    }
    printf("The product of the entered number is : %d\n",p);
    return 0;
}