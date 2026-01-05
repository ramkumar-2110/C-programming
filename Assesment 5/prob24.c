/*Write a program get number from user print the
total number of two-digit perfect square
numbers in the number.*/

#include<stdio.h>

 int main()
 { 
    int i,count=0;
    scanf("%d",&i);
    for(;i!=0;i/=10)
    {
      if((i%100)==16||(i%100)==25||(i%100)==36||(i%100)==49||(i%100)==64||(i%100)==81) 
      {
        count ++;
      }
    }
    printf("%d",count);
    return 0;
}