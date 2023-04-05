#include<stdio.h>
int main()
{
    int n,ele,i;
    printf("\nEnter the size for the array :\n");
    scanf("%d",&n);
    int arr[n];
    
    printf("\nEnter the elements of the array :\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be found : \n");
    scanf("%d",&ele);
    int found = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("\nElement %d is found at position %d \n",ele,i);
            found = 1;   
            break;
        }         
        }
    
    if(!found)
    {
     printf("\nElement not found !\n");
    }
    return 0;
}