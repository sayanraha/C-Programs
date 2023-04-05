/*Write a C program that calculates the volume of a sphere.
(Volume of sphere formula : 4/3 * pi * r*r*r )*/
#include<stdio.h>
#include<Math.h>
int main()
{
    float r;
     double v;
    const float pi = 3.142;
    printf("Input the radius of the sphere :");
    scanf("%f",&r);
    v = ((4)* (pi) * pow(r,3))/3;
    printf("The volume of sphere is %lf",v);
    return 0;
}