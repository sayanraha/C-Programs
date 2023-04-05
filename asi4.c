/*Write C program to perform addition, subtraction, multiplication
and division of two numbers.*/
#include<stdio.h>
int main()
{
    int a,b,sum,diff,pro;
    double quo;
    printf("Input any two numbers separated by comma :");
    scanf("%d,%d",&a,&b);
    printf("\n");
    if(a<0||b<0)
    {
        printf("No Output for Negative Number");
    }
    else
    {
    sum = a+b;
    if(a>b)
    {
        diff = a-b;
        quo = a/b;
    }
    else
    {
        diff = b-a;
        quo = b/a;
    }
    pro = a*b;
    }
    printf("The sum of the given numbers : %d\n",sum);
    printf("The difference of the given numbers : %d\n",diff);
    printf("The product of the given numbers : %d\n",pro);
    printf("The quotient of the given numbers : %lf\n",quo);
    return 0;
}