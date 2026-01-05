//Write a program get number from user print whether that number is prime or not.

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
 for(int i=2;i<x;i++)
 {
 if(x%i==0)
 {
   printf("Not Prime");
   return 0; 
 }
 if(x%i!=0)
 {
    prime=1;
 }
}
 if(prime==1)
 {
 printf("Prime");
 }
}