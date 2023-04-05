#include<stdio.h>
#include<Math.h>//CODE TO FIND THE TYPE AND AREA OF TRIANGLE
void type(float a,float b,float c);
void area(float a,float b,float c);
int main()
{
    float a,b,c;
    printf("Enter the sides of the triangle :\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a<b+c && b<c+a && c<a+b)
    {
        type(a,b,c);
        area(a,b,c);
    }
    else
    
        printf("No triangle possible with these sides\n");
    
        return 0;
}
void type(float a,float b,float c)
{
    if((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||(c*c)+(a*a)==(b*b))
    
        printf("Right Angle Triangle\n");
        if(a==b&&b==c)
        
            printf("Equilateral Triangle\n");
        
        else if(a==b || b==c || c==a)
        
            printf("Isoceles Triangle\n");
        
        else
        
            printf("Scalen Triangle\n");
        
    
}
void area(float a,float b,float c)
{
    float s,area;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is = %f\n",area);
}
