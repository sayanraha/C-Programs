#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int vowel =0,consonant =0,number =0,special = 0,space=0;
    printf("\n Enter a String \n");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'&&(a[i]!=' '||a[i]!='0'||a[i]!='0'||a[i]!='1'||a[i]!='2'||a[i]!='3'||a[i]!='4'||a[i]!='5'||a[i]!='6'||a[i]!='7'||a[i]!='8'||a[i]!='9')&&(a[i]!='~'||a[i]!='!'||a[i]!='@'||a[i]!='#'||a[i]!='$'||a[i]!='&'))
        {
            vowel++;
        }
        else if(a[i]!='a'||a[i]!='e'||a[i]!='i'||a[i]!='o'||a[i]!='u'&&(a[i]!=' '||a[i]!='0'||a[i]!='0'||a[i]!='1'||a[i]!='2'||a[i]!='3'||a[i]!='4'||a[i]!='5'||a[i]!='6'||a[i]!='7'||a[i]!='8'||a[i]!='9')&&(a[i]!='~'||a[i]!='!'||a[i]!='@'||a[i]!='#'||a[i]!='$'||a[i]!='&'))
        {
            consonant++;
        }
        else if(a[i]==' ')
        {
            space++;
        }
        else if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
        {
            number++;
        }
        else //(a[i]=='!'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]='&')
        {
            special++;
        }
    }
    printf("\n Vowel = %d\n",vowel);
    printf("\n Consonant = %d\n",consonant);
    printf("\n Space = %d\n",space);
    printf("\n Special Character = %d\n",special);
    printf("\n Number = %d\n",number);
}