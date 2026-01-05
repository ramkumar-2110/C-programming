/*Write a loop program to print the sum of two-digit 
numbers whose one's digit is 5.*/

#include<stdio.h>

int main()
{
    int sum=0;
    for(int i=15;i<100;i+=10)
    {
        sum+=i;
    }
    printf("%d",sum);
}