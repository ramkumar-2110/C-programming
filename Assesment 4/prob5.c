//Write a loop program to print odd number between 1 and 9.

#include<stdio.h>

int main()
{
 int x;
 x=1;
 loop:if(x<10)
 {
    if(x%2==1)
    {
        printf("%d\n",x);
    }
    x+=1;
    goto loop;
 }
}