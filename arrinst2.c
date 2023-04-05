//WAP to insert all the elements of one array into another array at a given position.
#include<stdio.h>
int main()
{
    int i,n,m,loc;
    printf("\n Enter the size of the first array :\n");
    scanf("%d",&n);//n=6
    printf("\n Enter the size of the second array:\n");
    scanf("%d",&m);//m=3
    int a[n],b[m];
    printf("\n Input the elements for the first array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Input the elements for the second array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n Elements in the first array are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n Elements in the second array are : \n");
    for(i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n enter the location :\n");
    scanf("%d",&loc);
    
    //for loop for shifting of the elements of the first array
    for(i=n-1;i>=loc;i--)
    {
        a[i+m]=a[i];
    }
    //Inserting the elements from the second array to the first array
    for(i=0;i<m;i++)
    {
        a[i+loc]=b[i];
    }
    int s=n+m;
    printf("\n New set of the array is :\n");
    for(i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}