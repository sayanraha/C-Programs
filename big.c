#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("The biggest number is : %d",a);
    }
    else if(b>c && b>a)
    {
        printf("The biggest number is : %d",b);
    }
    else
    {
        printf("The biggest number is : %d",c);
    }
    return 0;

}