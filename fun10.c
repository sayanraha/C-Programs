#include<stdio.h>
#include<Math.h>
long int series_sum(int,int);
int main()
{
    int n,x;
    printf("Enter the number of terms :-\n");
    scanf("%d",&n);
    printf("Enter the value of x :-\n");
    scanf("%d",&x);
    return series_sum(n,x);
}
long int series_sum(int num,int y)
{
    int fact = 1,p,i,j;
    double sum=0.0;
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            p = (2 * i )- 1;
            for(j=p;j>=1;j--)
            {
                fact = fact*j;
            }
            sum = sum - (pow(y,p)/fact);
        }
        else
        {
            p = (2 * i )- 1;
            for(j=p;j>=1;j--)
            {
                fact = fact*j;
            }
            sum = sum + (pow(y,p)/fact);
        }
    }
    printf("The Sum of the series is = %lf\n",sum);
}
