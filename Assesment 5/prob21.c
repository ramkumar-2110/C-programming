//Write a program get number from user print the total number digits which are odd in the number.

#include<stdio.h>

int main()
{
    int x,sum;
    sum =0;
    scanf("%d",&x);
    for(int i=x;i!=0;i/=10)
    {
       if((i%10)%2!=0) 
       {
        sum++;
       }
    }
    printf("%d",sum);
    return 0;
}