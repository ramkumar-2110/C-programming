/*Write a loop program to print two digit odd 
number between 11 and 20*/

#include<stdio.h>

int main()
{
  int i=11;
  while(i<20)
  {
    if(i%2==1)
    {
        printf("%d\n",i);
    }
    i++;
  }
}