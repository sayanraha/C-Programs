/*Program to print the value and address of array elements by subscripting a pointer 
 variable */
 #include<stdio.h>
 int main()
 {
     int arr[5]={10,20,30,40,50};
     int *ptr,i;
     ptr = arr;
     printf("\n Values of the array elements :- \n");
     for(i=0;i<5;i++)
     {
         printf("\n");
         printf("%d %d %d %d ",arr[i],*(arr+i),*(ptr+i),ptr[i]);
     }
     printf("\n Address of the array elements :- \n");
     for(i=0;i<5;i++)
     {
         printf("\n");
         printf("%p %p %p %p ",&arr[i],(arr+i),(ptr+i),&ptr[i]);
     }
 }