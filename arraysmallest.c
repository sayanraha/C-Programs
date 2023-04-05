/*Write a procedure which finds the smallest element of the array and 
swaps it with the 0th element of the array*/
#include<stdio.h>
int main()
{
    int n,i,small=0,temp=0;
    printf("\nEnter the size of the array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array :");
    for(i= 0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&arr[i]);
    }
    printf("\nElements present in the array are :\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[0]>arr[i+1])
        {
            small = i+1;
        }
    }
    if(small!=0)
    {
        temp = arr[0];
        arr[0]=arr[small];
        arr[small]=temp;
    }

    printf("\n\nThe new array after sorting is :\n");
    for(i=0;i<n;i++)
    {
       
        printf("%3d",arr[i]);
    }
    printf("\n\nThe smallest element is %d.\n",arr[0]);
    return 0;
}