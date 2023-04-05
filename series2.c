#include<stdio.h>
#include<Math.h>
int main()
{
    int i,n,x;
    float sum = 0.0;
    printf("Enter a number of terms :\n");
    scanf("%d",&n);
    printf("Enter the value for X :\n");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum = sum + pow(x,i);
        }
        else
        {
            sum = sum - pow(x,i);
        }
    }
    printf("The Sum of the series is = %f",sum);
}