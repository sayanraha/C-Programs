#include<stdio.h>
int multi(int);
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    return multi(num);
}
int multi(int n)
{
    int i;
    printf("The Multiplication table of the number is :-\n");
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
