#include<stdio.h>
int main()
{
    int num,count=0,temp;
    printf("Enter a number\n");
    scanf("%d",&num);
    temp = num;
    while(temp)
    {
        temp = temp/10;
        count++;
    }
    printf("The digits of the number are : %d",count);
    return 0;

}