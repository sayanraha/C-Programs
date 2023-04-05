#include<stdio.h>
int large(int a,int b);
int main()
{
    int x,y,z;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);
    z = large(x,y);
    printf("The large number is : %d",z);
    return 0;
}
int large(int a,int b)
{
    int l;
   l=a>b?a:b;
   return l;
}