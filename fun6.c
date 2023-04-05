#include<stdio.h>
#include<Math.h>
int isprime(int n);//CODE TO CHECK WHETHER THE NUMBER IS PRIME OR NOT USING FUNCTION
int main()
{
    int num;
    printf("Enter a number to check :\n");
    scanf("%d",&num);
    if(isprime(num))
        printf("PRIME NUMBER\n");
        else
        printf("NOT A PRIME NUMBER\n");
        return 0;
}
int isprime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    
    if(n%i==0)
    
    return 0;
    
    
    
    return 1;
    
    
}