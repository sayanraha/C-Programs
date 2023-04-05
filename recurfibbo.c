#include<stdio.h>
int a =0,b=1,c;
int fibbo(int num)
{
    //int a=0,b=1,c;
    if(num == 1)
    {
        return 0;
    }
    else
    {
        
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
        return fibbo(num-1);
        
    }
}
int main()
{
    int n;
    printf("Enter the number of terms :\n");
    scanf("%d",&n);
    printf(" 0 1 ");
    fibbo(n);
    return 0;
}