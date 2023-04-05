/* Q 3> Write a Program to test whether a given string is a palindrome or not with and
without using strcmp() .*/
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20],s2[20];
    int len,i,j,found = 0;
    printf("\nInput a String to check whether it is Palindrome or Not \n");
    gets(s1);
    len = strlen(s1);
    j=len-1;
    printf("\n The String is '%s' \n",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[j-i];
    }
    for(i=0;i<len;i++)
    {
        if(s1[i]==s2[i])
        {
            found = 1;
        }
        else
        {
            found = 0;
        }
    }
    if(found==1)
    {
        printf("\n %s is a Palindrome String \n",s1);
    }
    else
    {
        printf("\n %s is not a Palindrome String \n",s1);
    }
}