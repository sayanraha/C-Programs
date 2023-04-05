/*Write a program in C to display the number in reverse order.
Test Data :
Input a number: 12345
Expected Output :
The number in reverse order is : 54321*/
#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;
    printf("Input a number : ");
    scanf("%d",&num);
    printf("\n");
    temp=num;
    while(num!=0)
    {
        r=num%10;
        sum = sum*10+r;
        num/=10;
    }
        printf("The number in reverse order is :%d\n",sum);
    return 0;
}