//get string and print it

#include<stdio.h>
#include<string.h>

int main()
{
     char a1[100];
     fgets(a1,sizeof a1,stdin);
     a1[strcspn(a1,"\n")]='\0';
     printf("%s",a1);
}    