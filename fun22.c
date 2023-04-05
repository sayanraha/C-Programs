#include<stdio.h>
int isLeap(int year)
{
    
    if(year%100 != 0 && year%4==0 || year%400==0)
    {
        
        return 1;
    }
    else
    {
         goto jump;
    }
    jump : return 0;
}
int main()
{
    int y;
    printf("Enter a year to check : ");
    scanf("%d",&y);
    printf("%d",isLeap(y));
}
