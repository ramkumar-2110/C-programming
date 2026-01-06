//Get a String of numbers up to 50 digits and validate the number.

#include<stdio.h>
#include<string.h>

int main()
{
   char a1[100];
   fgets(a1,sizeof a1, stdin);
   a1[strcspn(a1,"\n")]='\0';
    for(int i=0;a1[i]!='\0';i++)
    {
        if((a1[i]>=48)&&(a1[i]<58))
        {
            continue;
        }
        else
        {
            printf("invalid");
            return 0;
        }
    }
    printf("valid");
   
}
