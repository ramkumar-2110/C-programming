/*Write a loop program to print the sum of two-digit 
numbers whose one's digit is 5.*/

#include<stdio.h>

int main()
{
    int i,sum=0;
    i=15;
    while(i<100)
    {
        sum+=i;
        i+=10;
    }
    printf("%d",sum);
}