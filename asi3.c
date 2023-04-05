/*Write a C program that takes hours and minutes as input, and
calculates the total number of minutes.*/
#include<stdio.h>
int main()
{
    int hr,min,total;
    printf("Input hours:");
    scanf("%d",&hr);
    printf("Input minutes:");
    scanf("%d",&min);
    total = (hr*60)+min;
    printf("Total: %d minutes.",total);
    return 0;
    }