#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the number whoes multiplication table you want \n");
    scanf("%d",&n);
    printf("The Multiplication Table for the given number is : \n");
    for(int i = 1;i<=10;i++)
    {
        printf("%d X %d = %d \n",n,i,n*i);
    }
    //*return 0;
}