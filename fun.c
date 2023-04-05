#include<stdio.h>
int sum(int a,int b);
int main()
{
    int x,y,z;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);
    z = sum(x,y);
    printf("The Sum is : %d",z);
}
int sum(int a,int b)
{
    int s;
    s = a+b;
    return s;
}
