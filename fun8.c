#include<stdio.h>
int primes(int,int);
int main()
{
    int a,b;
    printf("Enter the lower limit : \n");
    scanf("%d",&a);
    printf("Enter the upper limit : \n");
    scanf("%d",&b);
    return primes(a,b);
    
}
int primes(int x,int y)
{
    int i,j,count;
    printf("The prime numbers are :\n");
    for(i=x;i<=y;i++)
    { 
        count = 0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
            count++;
            break;
            }
        }
        if(count==0&&i!=1)
        {
            printf("%d%s",i," ");
        }
    }
    return 0;
}
