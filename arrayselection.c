//Program of Selection sorting
#include<stdio.h>
int main()
{
    int n,i,j,min,temp;
    printf("\n\nEnter the size of the array : \n\n");
    scanf("%d",&n);
    int arr[n];
    printf("\n\nEnter the elements in the array :\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&arr[i]);
    }
    printf("\n\n The elements present in the array are :\n");
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])//Condition to store the index of the minimum element of the array
            {
                min = j;
            }
        }
        //Swaping conditions below
            temp = arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        printf("\n\nThe array after sorting is :\n");
        for(i=0;i<n;i++)
        {
            printf("%3d",arr[i]);
        }
        printf("\n");
        return 0;
    }
