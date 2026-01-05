//Write a program to get a number from user print the total number of digits in that number

#include<stdio.h>

int main()
{
 int x,y=1;
 printf("Enter a number : ");
 scanf("%d",&x);
 for(int i=x;i>9;i/=10)
 {
    y+=1;
 }
 printf("%d\n",y);
}