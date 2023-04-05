#include<stdio.h>
int twinprime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        
            flag = 1;
            break;
        
    }
    if(flag == 0 )
    
        return 1;
    
    else
    
        return 0;
    
}
int main()
{
    int a,b,i;
    printf("Enter the Lower limit of the range :\n");
    scanf("%d",&a);
    printf("Enter the Upper limit of the range :\n");
    scanf("%d",&b);
    if(a<=1)
    {
        a = 2;
    }
    printf("The twin primes numbers are : \n");
    for(i=a;i<=b;i++)
    {
        if(twinprime(i)==1 && twinprime(i+2)==1)
        {
            printf("%d %d\n",i,i+2);
        }
    }
}
