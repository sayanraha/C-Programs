#include<stdio.h>
int main()
{
    int num,sum,temp,r;
    printf("The four digit palindrome numbers are :\n");
    for(num=1000;num<=9999;num++)
    { 
        temp=num;
        sum = 0;
        while(temp)
        {
            r=temp%10;
            sum=sum*10+r;
            temp/=10;
        }
            if(num==sum)
            printf("%d\t",sum);
            
    }
    return 0;
}