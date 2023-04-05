/* Consider a currency system in which there are notes of seven denominations,
namely, Re 1,Rs 2,Rs 5, Rs 10 , Rs 20, Rs 50 , Rs 100.If a sum of Rs N is entered 
through the keyboard,write a program to compute the smallest number of notes that will 
combine to give Rs N*/
#include<stdio.h>
int main()
{
    int n,p,s,t,total = 0;
    printf("Enter the amount : ");
    scanf("%d",&n);
    printf("The Denominations are as follows :-\n");
    while(n!=0)
    { 
        if((n/100)>=1)
        {
        p = n/100;
        s = 100 * p;
        t = n - s;
        printf("\n 100 * %d notes = %d\n",p,s);
        n = t;
        total+= s;
        }
        else if((n/50)>=1)
        {
            p = n/50;
            s = 50 * p;
            t = n - s;
            printf("\n 50 * %d notes = %d\n",p,s);
            n = t;
            total+= s;
        }
        else if((n/20)>=1)
        {
            p = n/20;
            s = 20 * p;
            t = n - s;
            printf("\n 20 * %d notes = %d\n",p,s);
            n = t;
            total+= s;
        }
        else if((n/10)>=1)
        {
            p = n/10;
            s = 10 * p;
            t = n - s;
            printf("\n 10 * %d notes = %d\n",p,s);
            n = t;
            total+= s;
        }
        else if((n/5)>=1)
        {
            p = n/5;
            s = 5 * p;
            t = n - s;
            printf("\n 5 * %d notes = %d \n",p,s);
            n = t;   
            total+= s;
        }
        else if((n/2)>=1)
        {
            p = n/2;
            s = 2 * p;
            t = n - s;
            printf("\n 2 * %d notes = %d \n",p,s);
            n = t;   
            total+= s;
        }
        else
        {
            p = n/1;
            s = 1 * p;
            t = n - s;
            printf("\n 1 * %d notes = %d \n",p,s);
            n = t;   
            total+= s;
        }
    }
        printf("\n----------------------------\n");
        printf("\t Total = %d\n",total);
    return 0;
}