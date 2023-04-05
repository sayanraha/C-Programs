/*Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the series = 111105*/
#include<stdio.h>
#include<Math.h>
int main()
{ 
    int n,i,s,sum=0;
    printf("Input the number or terms :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s = pow(10,i)-1;
        sum+= s;
        printf("%d%s",s," ");
    }
    printf("\n");
    printf("The sum of the series = %d",sum);
}