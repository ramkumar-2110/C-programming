#include<stdio.h>

int main()
{
 int x,y=0;
 printf("Enter a number : ");
 scanf("%d",&x);
 loop:if(x>9)
 {
    y+=x%10;
    x/=10;
    goto loop;
 }
 printf("%d\n",y+x);
}