#include<stdio.h>
#include<Math.h>
int main()
{
    int i,x,n,y;
    float sum = 0.0;
    printf("Enter the number of terms :- \n");
    scanf("%d",&n);
    printf("Enter the value of x : \n");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        sum = sum +pow(x,i);
        
    }
        printf("The sum of the series is = %f",sum);
}