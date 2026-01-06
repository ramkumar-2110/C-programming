//find the length of string

#include<stdio.h>
#include<string.h>

int main()
{
   char a1[100];
   int a=0;
   fgets(a1,sizeof a1, stdin);
   a1[strcspn(a1,"\n")]='\0';
    for(int i=0;;i++)
    {
        if(a1[i]=='\0')
        {
            printf("%d",a);
            return 0;
        }
        a++;
    }
   
}
