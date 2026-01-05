//Write a loop program to print the two-digit even numbers, who's sum of digits are 6.

#include<stdio.h>

int main()
{
 int x,y,temp;
 x=10;
 loop:if(x<100)
 {
    if(x%2==0)
    {
        temp=x;
        y=x%10;
        x/=10;
        y+=x;
        if(y==6)
        {
        printf("%d\n",temp);
        }
        x=temp;
    }
    x+=1;
    goto loop;
 }
}