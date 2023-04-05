/*Define a structure datatype called time_struct containing three members integer hours,minutes,second
Develop a program that will assign values to individual member and display the time in following 
format-> HH:MM:SS */
#include<stdio.h>
struct time
{
    int hours,minutes,seconds;
};struct time t;
int main()
{
    printf("\n Enter the Hours : ");
    scanf("%d",&t.hours);
    printf("\n Enter the Minutes : ");
    scanf("%d",&t.minutes);
    printf("\n Enter the Seconds : ");
    scanf("%d",&t.seconds);
   // int rem1,rem2;
   if(t.minutes>60 || t.seconds>60 ||t.hours>24)
    {
        if(t.seconds>3600)
        {
        t.hours = (t.hours%24) + (t.minutes/60) + (t.seconds / 3600);
        }
        else
        {
            t.hours = (t.hours%24) + (t.minutes/60);
        }
        t.minutes = (t.minutes % 60) + (t.seconds/60);
        t.seconds =  t.seconds % 60; 

    printf("\n TIME IS : \n");
    printf("%d hrs : %d mins : %d s",t.hours,t.minutes,t.seconds);
   }
   else
   {
       printf("\n TIME IS : \n");
    printf("%d hrs : %d mins : %d s",t.hours,t.minutes,t.seconds);
   }
    return 0;
}