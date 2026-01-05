/*Write a program get number from user print the total
number of single-digit prime numbers in the number.*/

#include<stdio.h>

 int main()
 { 
    int i,count=0;
    scanf("%d",&i);
    for(;i!=0;i/=10)
    {
      if((i%10)==2||(i%10)==3||(i%10)==5||(i%10)==7) 
      {
        count ++;
      }
    }
    printf("%d",count);
    return 0;
}