#include<stdio.h>
int Products(int,int);
int Quotient(int,int);
int Remainder(int,int);
int main()
{
int a,b;
printf("INPUT TWO NUMBERS : ");
scanf("%d%d",&a,&b);
printf("\nThe Product of %d and %d is %d\n",a,b,Products(a,b));
printf("\nThe Quotient of %d and %d is %d\n",a,b,Quotient(a,b));
printf("\nThe Remainder of %d and %d is %d\n",a,b,Remainder(a,b));

return 0;
}
int Products(int x , int y)
{
        int  sum = 0;
        for(int i = 1;i<=x;i++)
        {
            sum+=y;
        }
        return sum;
}
int Quotient(int m,int n)
{
    int count = 0;
     if(m>n)
     {
         while(m>=n)
         {
             m=m-n;
             ++count;
         }
     }
     else 
     {
         while(n>=m)
         {
             n=n-m;
             ++count;
         }
     }
     return count;
}
int Remainder(int o,int p)
{
    int rem;
    int c = 0;
     if(o>p)
     {
         while(o>=p)
         {
             o=o-p;
             ++c;
             rem = o;
         }  
     }
     else 
     {
         while(p>=o)
         {
             p=p-o;
             ++c;
             rem = p;
         }
}
        return rem;
}