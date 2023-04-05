//Program to input elements into an array an display them
#include<stdio.h>
int main()
{
    int arr[10];
    int i,n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Input the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%3d",&arr[i]);
    }
    printf("\n Displayed elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
    return 0;
}