/*//Program using malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   int *ptr;
   ptr = (int*)calloc(n,sizeof(int));
  // printf("\n Input elements\n");
   for(int i = 0 ;i<n;i++)
   {
       printf("%d\n",ptr[i]);
   }
   /*printf("\n elements present are\n");
   for(int i = 0 ;i<n;i++)
   {
       printf("%d\n",ptr[i]);
   }
   free(ptr);
}*/
