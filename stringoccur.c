/*Write a Program to count the occurrence of a each character in 
a given  string. */
#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],ch;
    int i,j,count;
    printf("\n Enter a String \n");
    gets(s);
    printf("\n The String is :- ");
    puts(s);
    for(i=0;s[i]!='\0';i++)
    {
        count = 1;//any character present in the string will appear atleast once
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                count++;
                s[j]=' ';//for removing repitation of characters
            }
        }
        if(s[i]!=' ')
        printf("\n The occurance of '%c'is = %d times.\n",s[i],count);
    }}