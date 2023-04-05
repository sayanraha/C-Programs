#include<stdio.h>
void main()
{
    char s[50];
    int len,count = 0;
    printf("\n Enter a String \n");
    gets(s);
    for(int i = 0; s[i]!='\0';i++)
    {
        count = count+1;
    }
    printf("\n Length of '%s' is %d ",s,count);
}
