//Program to add elements of an array
#include<stdio.h>
int main()
{
    int arr[10];
    int i,n,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Input the elements : \n");
    for(i=0;i<n;i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%3d",&arr[i]);
    }
    printf("\n Displayed elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+= arr[i];
    }
    printf("\nThe sum of the array element is = %d",sum);
    return 0;
}