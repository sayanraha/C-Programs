#include<stdio.h>
int main()
{
    int num,rem,j = 1,sum = 0,p;
    printf("Enter the binary number : ");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num % 10;
        p = rem * j;
        sum = sum + p;
        j = j * 2;
        num = num/10;
    }
    printf("The Decimal Equivalent is : %d",sum);
    printf("\n");
    return 0;
}
