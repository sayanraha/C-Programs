//Program to reverse the elements in an array
#include<stdio.h>
int main()
{
    int arr[10];
    int i,n;
    printf("Enter the number of terms : \n");
    scanf("%d",&n);
    printf("Enter the elements in the array according to your choice :- \n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&arr[i]);
    }
    printf("Display the elements of the array :- \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n The Elements in the reverse order are :-\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
