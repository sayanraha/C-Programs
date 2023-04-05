//Returning More than one value from a function
#include<stdio.h>
void func(int,int,int*,int*,int*);
int main(void)
{
    int a = 8,b=7,sum,diff,prod;
    func(a,b,&sum,&diff,&prod);
    printf("\n Sum = %d\t Difference = %d\t Product = %d\t",sum,diff,prod);
    return 0;
}
void func(int m,int n,int *p1,int *p2,int *p3)
{
    *p1 = m+n;
    *p2 = m-n;
    *p3 = m*n;
}