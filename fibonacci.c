#include<stdio.h>
int main()
{
    int i,x=0,y=1,z,n;
    printf("Enter the number of terms -\n");
    scanf("%d",&n);
    printf("The fibonacci series are : %d%s",y," ");
    for(i=1;i<n;i++)
    {
        z = x+y;
        printf("%d%s",z," ");
        x = y;
        y = z;
    }
    printf("\n");
    return 0;
}