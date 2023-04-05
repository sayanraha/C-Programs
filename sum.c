#include<stdio.h>
int main()
{
    int a;
    int d,sum = 0;
    printf("Enter a number \n");
    scanf("%d",&a);
    while(a>0)
    {
        d = a%10;
        sum = sum + d;
        a = a/10;
    }
    printf("The sum of the given number is %d \n",sum );
    //printf("\n");
    return 0;
}