/*Write a loop program to print the sum of two-digit
odd numbers, whose ten's digit is 7.*/

#include<stdio.h>

int main()
{
    int sum=0;
    for(int i=70;i<80;i++)
    {
        if(i%2==1)
        {
        sum+=i;
        }
    }
    printf("%d",sum);
}