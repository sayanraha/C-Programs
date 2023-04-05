/*Write a program to accept name and arrival time of five trains and display the name
with Railway time format.(2PM is written as 14.00)*/
#include<stdio.h>
struct Railway
{
  char name[15];
  int time;
  char s[5];
};struct Railway a[5];
int main()
{
    int i;
    printf("\n ACCEPT NAME AND ARRIVAL TIME OF FIVE TRAINS \n");
    for(i=0;i<5;i++)
    {
        printf("\n");
        scanf("%s%d%s",a[i].name,&a[i].time,a[i].s);
    }
    for(i=0;i<5;i++)
    {
        if(a[i].s== "PM")
        {
            a[i].time = 12 + a[i].time;
        }
    }
    printf("\n Name of the trains with their arrival time format is \n");
    for(i=0;i<5;i++)
    {
        printf("\n Name = %s and Arrival time = %d \n",a[i].name,a[i].time);
    }
    return 0;
}