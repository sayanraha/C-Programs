#include<stdio.h>
#define PI 3.142
int main()
{
    float area,perimeter,radius;
    printf("Enter the radius\n");
    scanf("%f",&radius);
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    printf("The area of the circle is: %f\n",area);
    printf("The perimeter of the circle is : %f\n",perimeter);
    return 0;
}