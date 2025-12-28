/*Write a loop program to print the sum of two-digit odd numbers, whose ten's digit is 7.
Answer:375*/

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