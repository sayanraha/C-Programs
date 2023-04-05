/*Write a C program to read the age of a candidate and determine whether it is
eligible for casting his/her own vote.*/
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of the candidate : ");
    scanf("%d",&age);
    printf("\n");
    if(age<0)
    {
        printf("WRONG INPUT \n");
    }
    else if(age>0 && age<18)
    {
        printf("Not eligible for voting \n");
    }
    else
    {
        printf("Eligible for voting \n");
    }
    return 0;
}