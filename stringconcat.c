#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20],s2[20];
    int l1,l2,i;
    printf("\n Enter the First String \n");
    gets(s1);
    printf("\n Enter the Second String \n");
    gets(s2);
    printf("\n The first String is '%s' \n",s1);
    printf("\n The Second String is '%s' \n",s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    printf("\n");
    for(i=0;i<l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("The concatinated String is %s \n",s1);
}