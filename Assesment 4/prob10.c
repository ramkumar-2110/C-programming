#include<stdio.h>

int main()
{
 int x,y=1;
 printf("Enter a number : ");
 scanf("%d",&x);
 loop:if(x>9)
 {
    x/=10;
    y+=1;
    goto loop;
 }
 printf("%d\n",y);
}