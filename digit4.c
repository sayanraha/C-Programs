#include<stdio.h>
#include<Math.h>
int main()
{
    int x,y,z;
    printf("Enter two integer values :\n");
    scanf("%d%d",&x,&y);
    z = pow(x,y);
    printf("The required output is : %d",z);
    return 0;
}