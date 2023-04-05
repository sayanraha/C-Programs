/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,count=0;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
  
}*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[50];
    int i,j=1,count=0;
    scanf("%[^S]%*c",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        count++;
    }
    for(i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
        if(s[i]==' '&&j<=count)
        {
            printf("\n");
            j=j+1;
        }
    }
    return 0;
}