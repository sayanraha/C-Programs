/*Write a program that reads three quardinates(x1,y1),(x2,y2),(x3,y3)as input and checks wheather these
numbers can be considered as the three vertices of a triangle.If the vertices can form a triangle then
find the type(isoceles,equilateral and right angled of the triangle) and the area of the triangle.
*/
#include<stdio.h>
#include<Math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    double s1,s2,s3,s,area;
    printf("\nEnter the values of first coordinate :");
    scanf("%d,%d",&x1,&y1);
    printf("\nEnter the values of second coordinate :");
    scanf("%d,%d",&x2,&y2);
    printf("\nEnter the values of third coordinate :");
    scanf("%d,%d",&x3,&y3);
    s1 = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    s2= sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    s3 = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    s = (s1+s2+s3)/3;
    area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    if(s1 == s2 && s2 == s3)//Condition for equilateral triangle
    { 
        
        printf("\nIt's an Equilateral triangle with sides %lf , %lf and %lf. \n",s1,s2,s3);
    }
    else if(s1 == s2 || s2 == s3 || s3 == s1)//Condition for isoceles triangle
    {
        
        printf("\nIt's an Isoceles triangle with sides %lf , %lf and %lf. \n",s1,s2,s3);
    }
    else if(pow(s1,2)+pow(s2,2)==pow(s3,2)||pow(s2,2)+pow(s3,2)==pow(s1,2)||pow(s1,2)+pow(s3,2)==pow(s2,2))//Condition for right angle triangle
    {
        
        printf("\nIt's an Right-angle triangle with sides %lf , %lf and %lf.\n",s1,s2,s3);
    }
    else
    {
        printf("WRONG INPUT\n");
    }
    
    printf("\nArea of the triangle is = %lf\n",area);
    return 0;
}