/*Write a program get number from user print the total number 
of single-digit perfect square numbers in the number.*/

#include<stdio.h>

 int main()
 { 
    int i,count=0;
    scanf("%d",&i);
    for(;i!=0;i/=10)
    {
      if((i%10)==0||(i%10)==1||(i%10)==9||(i%10)==4) 
      {
        count ++;
      }
    }
    printf("%d",count);
    return 0;
}