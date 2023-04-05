#include <stdio.h>
int main()
{
    float c;
    float d;
    printf("Enter the temperture in Celsius \n");
    scanf("%f",&c);
    d = 9/5*c+32;
    printf("The Temperture in Fahrenheit is : \n");
    printf("%f",d);
    return 0;
}