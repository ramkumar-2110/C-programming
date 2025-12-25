#include<stdio.h>

int main()
{
 int x,y=0;
 x=1;
 loop:if(x<6)
 {
    y+=x;
    x+=1;
    goto loop;
 }
 printf("%d\n",y);
}