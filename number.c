#include<stdio.h>
int main()
{
    int a;
    float r;
    printf("Enter a number \n");
    scanf("%d",&a);
    r = a % 3;
    printf("The reminder of the given number is : %f\n",r);
    return 0;
}