/*Program to understand the difference between pointer to an integer and pointer
to an array
#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter the size of the array \n");
    scanf("%d",&n);
    int a[n];
    int *p,(*ptr)[n];
    p = a;
    ptr = &a;
    printf("\n p = %p ,ptr = %p\n",p,ptr);
    p++;
    ptr++;
    printf("\n p = %p ,ptr = %p\n",p,ptr);
    return 0;
}*/
//Program to dereference a pointer to an array
#include<stdio.h>
int main()
{
    int i,n;
    //printf("\n Enter the size of the array \n");
    //scanf("%d",&n);
    int a[5]={7,12,14,26,39};
    int *p = a;
    int (*ptr)[5] = &a;
    printf("\n p = %p ,ptr = %p \n",p,ptr);
    printf("\n *p = %d ,*ptr = %d \n",*p,*ptr);

    return 0;
}
