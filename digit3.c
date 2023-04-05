#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of terms - \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        if(i%3==0)
        {
        sum = sum + (i*i*i);
        }
        else
        {
            continue;
        }
    }
    printf("The required output is : %d",sum);
}