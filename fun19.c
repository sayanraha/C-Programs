#include<stdio.h>
int sum_ser(int);
int main()
{
    int num;
    printf("Enter the number of terms :\n");
    scanf("%d",&num);
    return sum_ser(num);
}
int sum_ser(int n)
{
    int i;
    float sum = 0.0;
    for(i=1;i<=n;i++)
    {
        sum+= 1/(i*i);
    }
    printf("The Sum of the Series is =  %f\n",sum);
}