#include<stdio.h>
int main()
{
    int i=1,j,sum=0,num,fact;
    printf("Enter the upper limit : ");
    scanf("%d",&num);
    while(i<=num)
    {
        fact = 1;
        j=i;
        while(j>=1)
        {
            fact*= j;
            j=j-1;
        }
        sum += fact;
        i=i+1;
    }
    printf("\n The sum of the factoseries is = %d",sum);
    return 0;
}