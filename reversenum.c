#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;
    printf("Enter a number\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        r=num%10;
        sum = sum*10+r;
        num/=10;
    }
        printf("The reverse number is :%d\n",sum);
        printf("The double of thereverse number is :%d",2*sum);
    return 0;
}