/*Write a C program to read the value of an integer m and display the value of
output as 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("\n");
    if(x>0)
    {
        y = 1;
    }
    else if(x==0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("Required output is : %d\n",y);
    return 0;
}