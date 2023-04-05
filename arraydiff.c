/* The first difference D1 of a sequence A of N elements is obtained by subtracting
each element, except the last, from the next element in the array. 
The second difference D2 is defined as the first difference of D1, and so on. 
For example, if,
A : 1, 2, 4, 7, 11, 16, 22 then
D1 : 1, 2, 3, 4, 5, 6
D2 : 1, 1, 1, 1, 1
D3 : 0, 0, 0, 0 */
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("\n Enter the size of the array \n");
    scanf("%d",&n);
    int a[n];
    printf("\n Input elements in the array \n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&a[i]);
    }
    printf("\n The elements present in the array are \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
           if(a[j]>=0)
           {
            a[j]=a[j+1]-a[j];
           }
           else
           {
             break;
           }  
        }
        n=n-1;
    }
    printf("\n NEW ARRAY IS :-\n ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}