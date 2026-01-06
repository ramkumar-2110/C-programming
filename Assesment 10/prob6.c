//Get an integer and print each digit as a character. Print one character on one line.

#include<stdio.h>
#include<string.h>

int main()
{
    int x,y,d;
    scanf("%d",&x);
    for(int i=x;i>0;i/=10)
    {
        d=d*10;
        d=d+(i%10);
    }
    for(int i=d;i>0;i/=10)
    {
        y=i%10;
        printf("%c\n",y+48);
    }
}
