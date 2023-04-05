//Program to count even and odd numbers in an array
#include<stdio.h>
int main()
{
    int i,n,arr[10];
    int even = 0,odd = 0;
    printf("Enter the number of terms : \n");
    scanf("%d",&n);
    printf("Input the elements : \n");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Displayed Elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\n\n Number of Even = %d and Number of Odd = %d \n",even,odd);
    return 0;
}