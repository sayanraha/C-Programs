/*Define a structure with the following three members: roll number, name and
total marks of a student. Write a C program to read and display the details of a
student.*/
#include<stdio.h>
#include<string.h>
struct Student
{
    int roll_number;
    char name[20];
    float total_marks;
};struct Student s;
int main()
{
    printf("\n Enter the roll number of the student \n");
    scanf("%d",&s.roll_number);
    printf("\n Enter the name of the student \n");
    scanf("%s",s.name);
    printf("\n Enter Total Marks of the student \n");
    scanf("%f",&s.total_marks);
    printf("\n Roll number of the Student is = %d \n",s.roll_number);
    printf("\n Name of the Student is = %s \n",s.name);
    printf("\n Total Marks of the Student is = %f\n",s.total_marks);
    return 0;
}
