/*2) Create a UDF called student_grade() 
which does not takes any argument and does not have any return type. 
This function will print the grade of a student based on the average marks
 of 5 subjects given by the user in the main function. 
 [using without argument + no return type]*/
 #include<stdio.h>
 void student_grade();
 float avg;
 int main()
 {
     int a,b,c,d,e;
     //float avg;
     printf("Enter the marks in five subjects : \n");
     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     avg = (a+b+c+d+e)/5.0;
     student_grade();
     return 0;
 }
 void student_grade()
 {
     char grade;
     if(avg>=90)
     {
         grade = 'O';
     }
     else if(avg>=80 && avg <90)
     {
         grade = 'A';
     }
     else if(avg>=70&&avg<80)
     {
         grade = 'B';
     }
     else if(avg>=60&&avg<70)
     {
         grade = 'C';
     }
     else if(avg>=50&&avg<60)
     {
         grade = 'D';
     }
     else if(avg>=40&&avg<50)
     {
         grade = 'E';
     }
     else
     {
         grade = 'F';
     }
     printf("The grade obtained by the student is = %c\n",grade);
 }