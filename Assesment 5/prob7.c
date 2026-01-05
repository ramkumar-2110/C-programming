/*Write a loop program to print the two-digit odd numbers,
who's sum of digits are 7.*/

#include<stdio.h>

int main()
{
    int a,b;
    for(int i=11;i<100;i++)
    {
        if(i%2==1)
        {
            a=i%10;
            b=i/10;
            if (a+b==7)
            {
                printf("%d\n",i);
            }
        }
    }
}