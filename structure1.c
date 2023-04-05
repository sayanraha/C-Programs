/*Declare a structure of a student with details like roll number, student name and
total marks. Using this, declare an array with 50 elements. Write a C program
to read details of ‘n’ students and print the list of students who have scored 75
marks and above.*/
#include<stdio.h>
struct Student
{
    int roll_number;
    char sname[20];
    float total_marks;
};struct Student a[50];
int main()
{
    int i,n;
    printf("\n Enter the number of students \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter roll number , name ,total marks :");
        scanf("%d%s%f",&a[i].roll_number,a[i].sname,&a[i].total_marks);
    }
    printf("\n List of Students who scored 75 marks and above \n");
    for(i=0;i<n;i++)
    {
        if(a[i].total_marks>=75)
        {
        printf("\n");
        printf("%s",a[i].sname);
        }
    }
    printf("\n\n");
    return 0;
}