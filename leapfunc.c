/*1) Create a UDF called leap_year_checking() which takes one argument as year and check that year is leap year or not.
 Call that function from main. [using with argument + no return type]*/
#include<stdio.h>
void leap_year_checking(int);
int main()
{
    int year;
    printf("Enter a year to check : \n");
    scanf("%d",&year);
    leap_year_checking(year);
    return 0;
}
void leap_year_checking(int year)
{
    if((year%100==0 && year%400 == 0) ||(year%100!=0&&year%4==0))
    {
        printf(" \n %d is a Leap Year",year);
    }
    else
    {
        printf("\n%d is not a Leap Year",year);
    }
}