//get number string and print integer

#include<stdio.h>
#include<string.h>

int main()
{
     char a1[100];
     fgets(a1,sizeof a1,stdin);
     a1[strcspn(a1,"\n")]='\0';
     for(int i=0;a1[i]!='\0';i++)
     {
        printf("%d ",a1[i]-48);
     }

}    