#include<stdio.h>
void palin(int n);//CODE TO CHECK WHETHER THE NUMBER IS PALINDROME OR NOT USING FUNCTION
int main()
{
    int num;
    printf("Enter a number to check : \n");
    scanf("%d",&num);
    palin(num);
    return 0;
}
void palin(int n)
{
    int sum=0,r,temp;
    temp = n;
    while(n>0)
    {
        r = n%10;
        sum = sum * 10+r;
        n = n / 10;
    }
    if(sum == temp)
    {
        printf("Palindrome Number\n");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
}