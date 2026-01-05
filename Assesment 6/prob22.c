/*Write a program get number from user print the total 
number of two-digit odd numbers in the number.*/

#include<stdio.h>

int main()
{
    int x,a,count=0;
    scanf("%d",&x);
    while(x>9)
    {
        a=x%100;
        if(a%2==1)
        {
            count++;
        }
        x/=10;
    }
    printf("%d",count);
}