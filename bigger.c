# include <stdio.h>
int main(void)
{
    int a,b;
    printf("ENTER TWO NUMBERS \n");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("The larger number is : %d",a);
    else
    printf("The larger number is : %d",b);
    return 0;
}
