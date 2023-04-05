#include<stdio.h>//CODE TO PRINT THE SUM OF PROPER DIVISORS OF A NUMBER
int sumPdivisors(int);
int main()
{
    int num;
    printf("Enter a Number :-\n");
    scanf("%d",&num);
    return sumPdivisors(num);
}
int sumPdivisors(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    printf("The Sum of Proper Divisors of a Number is = %d",sum);
}