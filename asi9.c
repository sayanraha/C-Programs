/*Write a program in C to read 10 numbers from keyboard and find their sum and
average.*/
#include<stdio.h>
int main()
{
    int i,a,sum=0;
    float average;
    printf(" Input 10 Numbers :\n");
    for(i=1;i<=10;i++)
    {
       scanf("%d",&a);
       sum+= a;
    }
    average = (sum/10.0);
    printf("Sum of 10 numbers is : %d\n",sum);
    printf("Average of 10 numbers is : %f\n",average);
    return 0;
}