//Program to convert a Decimal Number to a Binary Number
#include<stdio.h>
int main()
{
    int i=0,j,k,n,num;
    printf("Enter the size for the array :");
    scanf("%d",&n);
    int arr[n];
    printf("\n\nEnter a Decimal Number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        arr[i]=num%2;
        num = num / 2;
        i++;
    }
    j=i-1;
    printf("\nThe Binary Equivalent is = ");
    for(k=j;k>=0;k--)
    {
        printf("%d",arr[k]);
    }
    return 0;
}