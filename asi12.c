/*Write a program in C to make such a pattern like a pyramid with a number which will
repeat the number in the same row.
    1
   2 2
  3 3 3
 4 4 4 4*/
 #include<stdio.h>
 int main()
 {
     int n,i,j;
     printf("Input the number of terms : ");
     scanf("%d",&n);
     printf("\n");
     for(i=1;i<=n;i++)
     {
         for(j=i;j<n;j++)
         {
             printf(" ");
         }
         for(j=1;j<=i;j++)
         {
             printf("%d%s",i," ");
         }
         printf("\n");
     }
     return 0;
 }