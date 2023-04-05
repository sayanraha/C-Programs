/*3) Create a UDF called second_max_three() 
which takes three arguments and return the maximum number from three numbers. 
Call the function from main. [using with argument + with return type]*/
#include<stdio.h>
int second_max_three(int,int,int);
int main()
{
    int x,y,z;
    printf("\nEnter the first Number :\n");
    scanf("%d",&x);
    printf("\nEnter the second Number :\n");
    scanf("%d",&y);
    printf("\nEnter the third Number :\n");
    scanf("%d",&z);
    printf("The largest number among the three numbers is = %d\n",second_max_three(x,y,z));
    return 0;
}
int second_max_three(int x,int y,int z)
{
    int largest;
    largest = x>y&&x>z?x:y>x&&y>z?y:z;
    return largest;
}