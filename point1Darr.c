#include<stdio.h>
int main()
{
    int n=5;
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);//Taking input from user
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",*(a+i));//displaying the elements
    }
}