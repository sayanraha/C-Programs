//INSERTION SORT PROGRAM
#include <stdio.h>
int main()
{
    int n,i,j,temp,key;
    printf("\n\n Enter the size for the array : \n");
    scanf("%d",&n);
    int arr[n];
    printf("\n\n Input the elements in the array :\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&arr[i]);
    }
    printf("\nThe elements before sorting is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("\n\n The elements after sorting is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}