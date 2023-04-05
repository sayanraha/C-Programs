#include<stdio.h>
int main()
{
    int i=10;
    int *ip=&i;
    int **iip=&ip;
    printf("Addres of i : %u\n",&i);
    printf("Value of ip : %u\n",ip);
    printf("Value at address of iip : %u\n",*iip);

    printf("Value of i : %d\n",i);
    printf("Value of i : %d\n",*ip);
    printf("Value of i : %d\n",**iip);
    return 0;
}