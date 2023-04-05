#include<stdio.h>
int main()
{
    int low,high,mid,ele,found=0,i,n;
    printf("\nEnter the size of the array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array :\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be found :\n");
    scanf("%d",&ele);
    low = 0,high = n-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(ele<arr[mid])
        {
            high=mid-1;
        }
        else if(ele>arr[mid])
        {
            low=mid+1;
        }
        else if(ele==arr[mid])
        {
            printf("\nElement %d is found at position %d \n",ele,mid);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("\nElement not present in the given array :\n");
    }
    return 0;
}

