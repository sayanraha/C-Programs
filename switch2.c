/*Write a program to find the max, min, average, standard deviation of 
the elements of an integer array. (menu driven)*/
#include<stdio.h>
#include<math.h>
float avg;
void main()
{
    int a[10],i,max,min,sum=0,s=0,p[10],n,choice;
    float sd;
    printf("\n Enter the total number of elements \n");
    scanf("%d",&n);
    a[n],p[n];
    printf("\n Input the elements \n");
    for(i=0;i<n;i++)
    {
        
        printf("\n");
        scanf("%d",&a[i]);
    }
    printf("\n The elements present in the array are \n");
    for(i=0;i<n;i++)
    {
        max = a[0];
        min= a[0];
        printf("%d ",a[i]);
    }
    printf("\n Enter Your Choice \n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1 ://Case for the maximum element
        for(i=1;i<n;i++)
        {
        if(a[i]>max)
        max = a[i];
        }
        printf("\n The Maximum element is %d\n",max);
        break;
        case 2 ://Case for the Minimum element
        for(i=1;i<n;i++)
        {
        if(a[i]<min)
        min = a[i];
        }
        printf("\n The Minimum element is %d\n",min);
        break;
        case 3://Case for the Average of the elements
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        avg = sum/n;
        printf("\n Average of the elements is = %f",avg);
        break;
        case 4://Standard deviation Case
        for(i=0;i<n;i++)
        {
            p[i] = pow((a[i]-avg),2);
            s+= p[i];
        }
        sd = sqrt(s)/n;
        printf("\n Standar Deviation is = %f\n",sd);
        break;
        deafult :
        printf("\n WRONG INPUT \n");
    }
}

