#include<stdio.h>
int fibonacci(int a,int b)
{
    if(a==0&&b==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(a++,b++);
    }
}
int main()
{
    int t,i,x=0,y=1;
    printf("Enter the number of terms :\n");
    scanf("%d",&t);
    
    printf("The fibonacci series is :\n");
    printf("%d",x);
    printf("%d",y);
    for(i=1;i<=t;i++)
    {
        printf("%d",fibonacci(x,y));
    }
    return 0;
}