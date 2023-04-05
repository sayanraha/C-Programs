//Program to find the smallest and largest number in an array.
#include<stdio.h>
int main()
{
    int arr[10],small,large;
    int i,n;
    printf("Enter the number of terms : \n");
    scanf("%d",&n);
    printf("Input the elements : \n");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Displayed Elements are : \n");
    for(i=0;i<n;i++)
    {
        small = arr[0];
        large = arr[0];
        printf("%d  ",arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
        }
        if(arr[i]>large)
        {
            large = arr[i];
        }
    }
    printf("\n Largest Number = %d and Smallest Number is = %d ",large,small);
    return 0;
}