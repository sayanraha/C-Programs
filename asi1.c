/*1. Write a C program that prints the perimeter of a rectangle on
taking its length and width as input.
(Perimeter of rectangle formula : 2 * ( length + width ) )*/
#include<stdio.h>
int main()
{
    int l,b;
    double p;
    printf("Input the length of the Rectangle :");
    scanf("%d",&l);
    printf("Input the width of the Rectangle :");
    scanf("%d",&b);
    p = 2*(l+b);
    printf("Perimetre of the Rectangle is : %lf",p);
    return 0;
}