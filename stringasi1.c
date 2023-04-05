#include<stdio.h>
void main()
{
    char s[30],search;
    int i,count=0;
    printf("\n Enter a String \n");
    gets(s);
    printf(" \n The String is ");
    puts(s);
    printf("\n Enter a character whoes frequency who want \n");
    scanf("%c",&search);
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]==search)
        count++;
    }
    printf("\n The occurence of %c is %d times in the given string \n",search,count);
}