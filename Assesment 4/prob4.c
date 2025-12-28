//Write a loop program to print sum of 6 to 1

#include<stdio.h>

int main()
{
 int x,y=0;
 x=6;
 loop:if(x>0)
 {
    y+=x;
    x-=1;
    goto loop;
 }
 printf("%d\n",y);
}