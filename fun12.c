#include<stdio.h>
int cubesum(int);
int isArmstrong(int);
int printArmstrong(int);
int num;
int main()
{
    
    printf("Enter a number :\n");
    scanf("%d",&num);
    return cubesum(num);
}
int cubesum(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r = n%10;
        sum=sum + r*r*r;
        n/=10;
    }
    return isArmstrong(sum);
}
int isArmstrong(int s)
{
    if(num == s)
    {
                return printArmstrong(num);
    }
 return printArmstrong(0);
}
int printArmstrong(int o)
{
    if(o==0)
    {
        printf("%d is not an Armstrong Number \n",num);
    }
    else
    {
    printf("%d is an Armstrong Number \n",num);
    }
}