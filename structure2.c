/*Write a program to acccept name,age and city of five people and display the name
and the city of the eldest one.*/
#include<stdio.h>
struct People
{
  char name[20];
  int age;
  char city[15];
};struct People a[5];
int main()
{
    int i,eldest;
    for(i=0;i<5;i++)
    {
        printf("\n Enter Name , Age , City \n");
        eldest = a[0].age;
        scanf("%s%d%s",a[i].name,&a[i].age,a[i].city);
    }
    for(i=0;i<5;i++)
    {
        if(a[i].age>eldest)
        {
            eldest = a[i].age;
        }
    }
    printf("\n Name and City of the eldest one is :\n");
    for(i=0;i<5;i++)
    {
        if(a[i].age==eldest)
        {
            printf("Name = %s and City = %s",a[i].name,a[i].city);
        }
    }
}