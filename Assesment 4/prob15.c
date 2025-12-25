#include<stdio.h>

int main()
{
 int x,prime=0;
 printf("Enter a number : ");
 scanf("%d",&x);
 if(x==2)
 {
    printf("Prime");
    return 0;
 } 
 if(x%2==0)
 {
   printf("Not Prime");
   return 0; 
 }
 int y=2;
 loop:if(y<x) 
 {
 if(x%y==0)
 {
   printf("Not Prime");
   return 0; 
 }
 if(x%y!=0)
 {
    prime=1;
 }
 y+=1;
 goto loop;
}
 if(prime==1)
 {
 printf("Prime");
 }
}