//Get a number up to 50 digits and reverse it.

#include<stdio.h>
#include<string.h>

int main()
{
     char a1[100],b=0;
     fgets(a1,sizeof a1,stdin);
     a1[strcspn(a1,"\n")]='\0';
     b=strlen(a1);
     printf("%s\n",a1);
     for(int i=b-1;i>-1;i--)
     {
        printf("%d",a1[i]-48);
     }

}    