/* Q 2> Write a Program to count the number of vowels and consonants present in a
sentence.*/
#include<stdio.h>
void main()
{
    char s[20];
    int vowel = 0,consonant = 0,i;
    printf("\n Input a String \n");
    gets(s);
    printf("\n The String is '%s' \n",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    printf("\n Number of Vowel present in the String is = %d \n",vowel);
    printf("\n Number of Consonant present in the String is = %d \n",consonant);
    printf("\n\n");
}