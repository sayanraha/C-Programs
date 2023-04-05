//Program to reverse a given string
#include<stdio.h>
#include<string.h>
void main()
{
    char s[30],temp;
    int i=0,j,len;
    printf("\n Enter a String : \n");
    gets(s);
    printf("\n The String is '%s' \n",s);
    len = strlen(s);
    j = len-1;
    while(i<j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    printf("\n The reverse String is '%s'\n",s);
}