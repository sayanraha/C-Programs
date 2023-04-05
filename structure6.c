/*Write a program to create structure of book , with book title,author name ,publication,and price.
Read data of n books and display them */
#include<stdio.h>
#include<stdlib.h>
struct book
{
   char title[15];
   char name[20];
   int publication,price;
};
int main()
{
    int n,i;
    printf("\n Enter the number of books :- \n");
    scanf("%d",&n);
   // ptr = (int*)malloc(n*sizeof(int));
    struct book a[n];
    printf("\n Input Details \n");
    for(i=0;i<n;i++)
    {
        scanf("%s%s%d%d",a[i].title,a[i].name,&a[i].publication,&a[i].price);
        printf("\n");
    }
    printf("-------------------------------------------------------------------");
                  printf("\n Details of all books are as follows :\n");
    printf(" Sl No. Title \t Name \t Publication \t Price :\n");
    for(i=0;i<n;i++)
    {
       printf("%d-->\t %s \t %s \t %d \t %d",i+1,a[i].title,a[i].name,a[i].publication,a[i].price);
       printf("\n");
    }
    return 0;
}