#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("\n Enter size of the first array \n");
    scanf("%d",&n);
    int a[n];
    printf("\n Enter size of the second array \n");
    scanf("%d",&m);
    int b [m];
    int c[15];
    printf("\n Input elements of the first array \n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&a[i]);
    }
    printf("\n  Elements of the first array \n");
    for(i=0;i<n;i++)
    {
        //printf("\n");
        printf("%d",a[i]);
    }
    printf("\n Input elements of the second array \n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        scanf("%d",&b[i]);
    }
    printf("\n  Elements of the second array \n");
    for(i=0;i<m;i++)
    {
        //printf("\n");
        printf("%d",b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(j=0;i<m;i++)
    {
    for(i=0;i<n;i++)
    {
        if(c[i]!=b[j])
        {
           c[n]=b[j];
           n=n+1;
        }
    }
    }
    printf("\n UNION ARRAY IS\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}