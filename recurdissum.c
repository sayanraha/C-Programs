#include<stdio.h>
int displaysum(int num);
int main()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("= %d",displaysum(n));
    return 0;
}
int displaysum(int num)
{
    int sum;
    if(num==0)
    {
        return 0;
    }
    else
    {
        sum = num + displaysum(num-1);
        printf("%d + ",num);
        return sum;
    }
}
