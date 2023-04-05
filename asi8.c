/*Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12, 2nd Number = 25, 3rd Number = 52 
The 3rd Number is the greatest among three*/
#include<stdio.h>
int main()
{
    int x,y,z,max;
    printf("Test Data : ");
    scanf("%d%d%d",&x,&y,&z);
    printf("1st Number = %d ,    2nd Number = %d ,    3rd Number = %d \n",x,y,z);
    if(x > y && x > z)
    {
        printf("The 1st Number is the greatest among three \n");
    }
    else if(y > x && y > z)
    {
        printf("The 2nd Number is the greatest among three \n");
    }
    else
    {
        printf("The 3rd Number is the greatest among three \n");
    }
    
    return 0;
}