/*Write a program in C to find the number and sum of all integer between 100 and 200 which
are divisible by 9.
Expected Output :
Numbers between 100 and 200, divisible by 9 :
108 117 126 135 144 153 162 171 180 189 198
The sum : 1683*/
#include<stdio.h>
int main()
{
    int i,l,u,sum=0;
    printf("Input the lower limit of the range : ");
    scanf("%d",&l);
    printf("\nInput the upper limit of the range : ");
    scanf("%d",&u);
    printf("\n Numbers between %d and %d, divisible by 9 : ",l,u);
    for(i=l;i<=u;i++)
    {
        if(i%9==0)
        {
            sum+= i;
            printf("%d%s",i," ");
        }
    }
    printf("\n The sum : %d",sum);
    return 0;
}