//Program to find the length of the given string using library functions
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    unsigned int l;
    printf("\nEnter a string \n");
    gets(s);
    l = strlen(s);
    printf("\n Length of '%s' is %d\n",s,l);
    return 0;
}