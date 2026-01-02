/*Write a loop program to print two digit odd 
number between 11 and 20*/

#include<stdio.h>

int main()
{
  for(int i=11;i<20;i++)
  {
    if(i%2==1)
    {
        printf("%d\n",i);
    }
  }
}