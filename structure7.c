/*Define a structure person that would contain person name ,date of joining ,and salary using this 
structure to read the info of 5 people and print the same on the screen */
#include<stdio.h>
struct date
{
  int dat,month,year;
};
struct person
{
    char n[20];
    struct date b;
    float sal;
};
struct person a[2];
int main()
{
    int i;
    printf("\n Input Details \n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        scanf("%s",a[i].n);
        scanf("%d%d%d",&a[i].b.dat,&a[i].b.month,&a[i].b.year);
        scanf("%f",&a[i].sal);
    }
    printf("\n--------------------------------------------------------------------------------\n");
   ("\n NAME               DATE            SALARY\n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        printf("%s \t %d/%d/%d \t %.f/- ",a[i].n,a[i].b.dat,a[i].b.month,a[i].b.year,a[i].sal);
    }
    return 0;
}