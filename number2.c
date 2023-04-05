#include<stdio.h>
int main()
{
    int arr[10];
    int i,greatest;
    printf("Enter ten numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    greatest=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>greatest)
        {
        greatest=arr[i];
        }
    }
    printf("The Greatest number is : %d",greatest);
    return 0;
}