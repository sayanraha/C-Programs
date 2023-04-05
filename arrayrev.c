#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter the size of the array \n");
    scanf("%d",&n);
    int a[n];
    printf("\n Input elements into the array \n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&a[i]);
    }
    printf("\n Elements in the array are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n Elements in the reverse order are :\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}