#include<stdio.h>
# define N 3
int main()
{
    int i,j;
    int arr[N][N];
    printf("\n Input the elements \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
    //Taking input from the user from pointer arithmetic concept
            scanf("%d",&(*(*(arr+i)+j)));
        }
    }
    printf("\n Array elements \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
    //Displaying array elements using pointers expressions
            printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n");
    }
    return 0;
}