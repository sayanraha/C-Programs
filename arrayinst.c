/*Write a program to insert an element in a sorted array at proper place 
so that the array remains sorted after insertion also*/
#include<stdio.h>
int main()
{
    int n,i,ele;
     printf("\n\n Enter the size for the array : \n");
    scanf("%d",&n);
    int arr[n];
    printf("\n\n Input the elements in the array :\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&arr[i]);
    }
    printf("\nThe elements present in the array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\nEnter a element that is to be inserted : \n");
    scanf("%d",&ele);
    int m = n;
    for(i=m;i>=0;i--)
    {
        if(ele<arr[i])
        {
            arr[i+1]=arr[i];
            arr[i]=ele;
        }
    }
    printf("\n\n The new set of array is : \n");
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}