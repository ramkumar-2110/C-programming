//Write a loop program to print the two-digit odd numbers, below 20.

#include<stdio.h>

int main()
{
 int x;
 x=10;
 loop:if(x<20)
 {
    if(x%2==1)
    {
        printf("%d\n",x);
    }
    x+=1;
    goto loop;
 }
}