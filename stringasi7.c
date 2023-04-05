/*#include<stdio.h>
void main()
{
   char str[500];
   int line, word = 1, ch;
   line = ch = 0;
   printf("Enter string :\n");
   gets(str);
   for(int i=0; str[i]!='\0'; i++)
   {
      if(str[i]=='\n')
      {
         line++;
      }
        
       else if(str[i]==' '||str[i]=='\n')
         {
            word++;
            ch++;
         }

         else
         {
            ch++;
         }
      }
   
   printf("\nCharacter counts = %d\n", ch);
   printf("Word counts = %d\n", word);
   printf("Line counts = %d\n", line);
}*/
#include <stdio.h>
int main()
{
    char str[100];

    int words,line,ch; 
    words = line = ch=1;
    printf("\n Enter a paragraph \n");
    scanf("%[^S]",str);   

    for(int i=0;str[i]!='\0';i++)
     { 
         if(str[i] == ' ')
         { 
              words++;
              ch++;
         }
         else if(str[i] == '\n')
         {
             line++;
             words++;
         }
         else if(str[i]!= ' ' && str[i] != '\n')
         {
         ch++;
         }
     }
     printf("\n Total number of words : %d\n",words);
     printf("Total number of lines : %d\n",line);
     printf("Total number of characters : %d\n",ch);
    return 0;
}