//Write a program to get a number from user and print the sum of all digits.

#include<stdio.h>

int main()
{
 int x,i,y=0;
 printf("Enter a number : ");
 scanf("%d",&x);
 for(i=x;i>9;i/=10)
 {
    y+=i%10;
 }
 printf("%d\n",y+i);
}