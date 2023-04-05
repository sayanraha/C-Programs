#include<stdio.h>
int pro(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers :\n");
    scanf("%d %d",&a,&b);
    return pro(a,b);
}   
int pro(int x,int y)
{
    int i,multi =0;
    for(i=1;i<=y;i++)
    {
        multi = multi + x;
    }
    printf("The product of the two numbers is = %d",multi);

}
