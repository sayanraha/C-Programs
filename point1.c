/*Write a Program in function that will swap (exchange) the value of two integer
variables passes as arguments. [Hints: use the concept of call by reference]*/
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    int *ptr;
    printf("\n Enter the first number \n");
    scanf("%d",&a);
    printf("\n Enter the second number \n");
    scanf("%d",&b);
    swap(&a,&b);
    return 0;
}
void swap(int *ptr,int *ptr1)
{
    int *temp;
    temp = ptr;
    ptr = ptr1;
    ptr1 = temp;
    printf("\n Numbers after swapping is:- \n");
    printf("\n First Number = %d , Second Number = %d",*ptr,*ptr1);
}