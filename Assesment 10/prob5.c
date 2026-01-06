//get integer and print string

#include<stdio.h>
#include<string.h>

int main()
{
    char a1[100],f=0;
    int b=0,d=0,e=0;;
    scanf("%d",&b);
    
    for(int i=d;i>0;i/=10)
    {
        f=(i%10)+48;
        a1[e]=f;
        e++;

    } 
    a1[e]='\0';
    printf("%s",a1);
}