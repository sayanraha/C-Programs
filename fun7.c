#include<stdio.h>//CODE FOR PASCAL's TRIANGLE USING FUNCTIONS
int factorial(int);
int combi(int,int);
int pascal(int);
int factorial(int n)//FUNCTION FOR TAKING THE FACTORIAL
{
    int f  = 1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return f;
}
int combi(int n,int r)//FUNCTION FOR THE COMBINATION PART
{
    return (factorial(n)/(factorial(n-r)*factorial(r)));
}
int pascal(int line)//FUNCTION TO PRINT THE PASCAL TRIANGLE
{
    int i,j,r=0;
    printf("The Pascales Triangle is : \n");
    for(i=1;i<=line;i++)
    {
        for(j=i;j<line;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2d%s",combi(i-1,r)," ");
            r = r+1;
        }
        r = 0;
        printf("\n");
    }
}
int main()//MAIN FUNCTION
{
    int l;
    printf("Enter the number of lines :\n");
    scanf("%d",&l);
    return pascal(l);
}