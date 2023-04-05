/* Write a program to find the non-repeated element in an array. 
The array contains n number of values where all the elements (except one) 
appear exactly twice.*/
#include<stdio.h>
void main()
{
    int a[10],i,j,n;
    printf("\n Enter the total number of elements \n");
    scanf("%d",&n);
    printf("\n Input the elements \n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&a[i]);
    }
    printf("\n The elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);   
    }
     printf("\n The non repeated element in the array is : ");
    for(i=0;i<n;i++)
    {
        int count = 0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                count++;
            }
        }
        if(count == 0)
        {
            printf("%d ",a[i]);
        }
    }
   
}