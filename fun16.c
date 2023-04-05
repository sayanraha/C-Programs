#include<stdio.h>
int amicable(int,int);
int main()
{
    int x,y;
    printf("Enter the lower limit of the range :\n");
    scanf("%d",&x);
    printf("Enter the upper limit of the range :\n");
    scanf("%d",&y);
    return amicable(x,y);
}
int amicable(int a,int b)
{
    int i,j,k,sum,sum1;
    printf("The pair of amicable numbers in the given range %d to %d are :\n",a,b);   
    for(i=a;i<=b;i++)
    {
        sum = 0;
        sum1 = 0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum = sum + j;
            }
        }
        for(k=1;k<sum;k++)
        {
            if(sum%k==0)
            {
                sum1 = sum1+k;
            }
        }
        if(sum1==i&&sum1!=sum)
        {
            printf("%d %d\n",sum1,sum);
        }
    }
}