#include<stdio.h>

int main()
{
 int x,y=0;
 x=10;
 loop:if(x<100)
 {
    if(x%2==1)
    {
        y+=x;
    }
    x+=1;
    goto loop;
 }
 printf("%d\n",y);
}