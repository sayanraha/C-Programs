/*WAP that scans a one-dimentional array from left to right
 and compares all adjacent elements also count the 
 total number of exchanges done in the array*/
 #include<stdio.h>
 int main()
 {
     int n,i,temp,count=0;
     printf("\n\n Enter the size of the array : \n\n");
     scanf("%d",&n);
     int arr[n];
     printf("\nInput the elements in the array :\n");
     for(i=0;i<n;i++)
     {
         printf("\n");
         scanf("%d",&arr[i]);
     }
     printf("\n The elements inside the array are : \n");
     for(i=0;i<n;i++)
     {
         printf("%5d",arr[i]);
     }
     for(i=0;i<n;i++)
     {
         if(arr[i]>arr[i+1])
         {
             temp = arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=temp;
             count++;
         }
     }
     printf("\nThe new array after sorting adjacent elements is :\n");
     for(i=0;i<n;i++)
     {
         printf("%5d",arr[i]);
     }
     printf("\n The exchanges done in the given array are %d times",count);
     printf("\n\n");
     return 0;
 }