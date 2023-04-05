#include<stdio.h>
void display(int num);
int main()
{
    int n;
    printf("Enter the number of terms :\n");
    scanf("%d",&n);
    printf("The numbers from 1 to  %d are : \n",n);
    display(n);
    return 0;
}
void display(int num)
{
        if(num==0)
        return ;
        display(num-1);
        printf("%d ",num);
}
