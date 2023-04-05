#include<stdio.h>
int main()
{
    float a,b,c,d,total,perc;
    char grade;
    printf("Enter the marks for the four subjects\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    total = a+b+c+d;
    perc = total/4;
    if(perc>=85)
    {
        grade = 'A';
    }
    else if(perc<85 && perc >=70)
    {
        grade = 'B';
    }
    else if(perc<70 && perc >=55)
    {
        grade = 'C';
    }
    else if(perc<55 && perc >=40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'E';
    }
    printf("%c\n",grade);
    return 0;

}