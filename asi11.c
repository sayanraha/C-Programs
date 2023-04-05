/*Write a program in C to display the n terms of odd natural number and their
sum.
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100*/
#include<stdio.h>
int main()
{
    int n,i,sum = 0,a=1;
    printf("Input number of terms : ");
    scanf("%d",&n);
    printf("The odd numbers are : ");
    for(i=1;i<=n;i++)
    {
        if(a%2!=0)
        {
            printf("%d%s",a," ");
        }
         
         sum = sum + a;
         a=a+2;
    }
    printf("\n");
    printf("The Sum of odd Natural Number upto 10 terms :%d",sum);
    return 0;
}