#include<stdio.h>
int main(void)
{
    int year;
    printf("Enter the year to check \n");
    scanf("%d",&year);
    if(year%100 != 0 && year%4==0 || year%400==0)
    printf("Leap year \n");
    else
    printf("Not a Leap year \n");
    return 0;
}