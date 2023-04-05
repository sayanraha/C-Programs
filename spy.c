#include<stdio.h>
int main()
{
    int n,rem,pro=1,sum=0;
    printf("Enter a number to check : ");
    scanf("%d",&n);
    int o = n;
    while(n!=0)
    {
        rem = n%10;
        pro = pro * rem;
        sum = sum + rem;
        n = n/10;
    }
    if(pro==sum)
    {
        printf("\n %d is a Spy Number\n",o);
    }
    else
    {
        printf("\n %d is not a Spy Number\n",o);
    }
    return 0;
}