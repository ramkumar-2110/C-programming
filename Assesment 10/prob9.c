//Get a string of numbers up to 50 digits and remove all leading zeros.

#include<stdio.h>
#include<string.h>
int main()
{
     char a1[100];
     int b=0,c;
     fgets(a1,sizeof a1,stdin);
     a1[strcspn(a1,"\n")]='\0';
     b=strlen(a1);
     for(int i=0;i<b-1;i++)
     {
        if(a1[i]!=48)
        {
            c=i;
            break;
        }
     }for(int i=c;a1[i]!='\0';i++)
     {
        printf("%c",a1[i]);
     }
     
}   