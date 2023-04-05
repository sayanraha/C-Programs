#include<stdio.h>
int bill = 450;//global variable
void calcharge(int n)//function to calculate telephone bill
{
    
    if(n==100)
    bill = 450;
    else if(n>100&&n<=250)
    bill = 450 + 1*(n-100);
    else if(n>250&&n<=350)
    bill = 450 + 150 + 1.5*(n-100);
    else 
    bill = 450 + 150 + 150 + 2*(n-100);
}
void display()//function to display the bill
{
printf("-------------------------------------------");
    printf("\n The Required bill is = %d/-",bill);
}
int main()
{
    int choice,call;
    printf("\n Enter Users choice \n");
    scanf("%d",&choice);
    printf("\n Enter the Number of calls \n");
    scanf("%d",&call);
    switch(choice)
    {
        case 1 :
        printf("\n Domestic Connection \n");
        calcharge(call);
        display();
        break;
        case 2:
        printf("\n Business Connection \n");
        calcharge(call);
        bill = bill+50;
        display();
        break;
        default:
        printf("\n Wrong Input \n");
    }
}