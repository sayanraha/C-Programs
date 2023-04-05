//Write a program to input a student score in a subject(out of hundred) and print a grade output.Use ternary operator and no other control statement.Also for grading purpose please use the makaut grading system.
#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("Enter the marks obtained in Computer Science :");
    scanf("%d",&marks);
    grade = (marks>=90 && marks<=100)?'O':(marks>=80 && marks<=89)?'E':(marks>=70 && marks<=79)?'A':(marks>=60 && marks<=69)?'B':(marks>=50 && marks<=59)?'C':(marks>=40 && marks<=49)?'D':(marks<40)?'F':'I';                                                                                                                                            
    printf("\n The grade for the entered marks is : %c\n",grade);
    return 0;
}