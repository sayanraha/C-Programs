#include<stdio.h>
int perfect(int a,int b);
int main()
{
    int x,y;
    printf("Enter the lower limit of the range :\n");
    scanf("%d",&x);
    printf("Enter the upper limit of the range :\n");
    scanf("%d",&y);
    return perfect(x,y);
}
int perfect(int a,int b)
{
    int i,j,sum;
    printf("The range of perfect numbers from %d to %d is :\n",a,b);
    for(i=a;i<=b;i++)
    { 
        sum = 0;

        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum == i)
        printf("%d\n",sum);
        }
}