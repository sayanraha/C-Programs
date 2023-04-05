#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number a = ");
    scanf("%d",&a);
    printf("Enter the second number b = ");
    scanf("%d",&b);
    a = b+a;
    b = a - b;
    a = a - b;
    printf("The swap Numbers are :\n");
    printf("a=%d,b=%d",a,b);
    
 }   
