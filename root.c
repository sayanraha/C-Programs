#include<stdio.h>
#include<Math.h>
int main()
{
    double a,b,c,discriminant,root1,root2,imagPart,realPart ;
    printf("\n Enter the value of constant a : ");
    scanf("%lf",&a);
    printf("\n Enter the value of constant b : ");
    scanf("%lf",&b);
    printf("\n Enter the value of constant c : ");
    scanf("%lf",&c);
    discriminant = ((b*b) - (4*a*c));
    if(discriminant>0)
    {
        printf("\n Roots are real and distinct :- \n");
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("ROOT1 = %lf and ROOT2 = %lf \n",root1,root2);
    }
    else if(discriminant==0)
    {
        printf("\n Roots are real and equal :- \n");
        root1 = (-b/(2*a));
        root2 = root1;
        printf("ROOT1 = ROOT2 = %lf \n",root1,root2);
    }
    else
    {
        printf("\n Roots are not real and is complex :- \n");
        realPart = -b /(2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}