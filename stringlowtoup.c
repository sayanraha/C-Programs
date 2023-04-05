//Program to convert Lower Case letter into Upper Case in a given string.
#include<stdio.h>
void main()
{
    char s[20];
    int i = 0;
    printf("\n Input a String \n");
    gets(s);
    printf("The String is '%s' \n",s);
    while(s[i]!='\0')
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-= 32 ;
        }
        i++;
    }
    printf("\n\n The new String is '%s' \n\n",s);
} 