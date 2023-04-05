#include<stdio.h>
int  reverse(int n);//CODE TO REVERSE A NUMBER USING FUNCTIONS
int main()
{
    int num,z;
    printf("Enter a number :\n");
    scanf("%d",&num);
    
    printf("The reverse number is : %d",reverse(num));
    return 0;
}
int reverse(int n)
{
    int sum = 0,d;
    while(n!=0)
    {
        d = n%10;
        sum = sum*10+d;
        n/=10;
    }
    return sum;
}