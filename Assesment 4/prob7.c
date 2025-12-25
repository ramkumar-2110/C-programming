#include<stdio.h>

int main()
{
 int x,y,temp;
 x=10;
 loop:if(x<100)
 {
    if(x%2==1)
    {
        temp=x;
        y=x%10;
        x/=10;
        y+=x;
        if(y==7)
        {
        printf("%d\n",temp);
        }
        x=temp;
    }
    x+=1;
    goto loop;
 }
}