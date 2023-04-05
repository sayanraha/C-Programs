//WAP to insert a element in an array at a given position
#include<stdio.h>
int main()
{
    int i,ele,pos,n;
    printf("\n Enter the number of elements \n");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements in the array : \n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&arr[i]);
    }
    printf("\n The elements present are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n Enter the element that is to be inserted \n");
    scanf("%d",&ele);
    printf("\n Enter the position where the element is to be inserted \n");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    
    printf("\n The new array after insertion of an elements at a desired position is : \n\n");
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    return 0;
} 