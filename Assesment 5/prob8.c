/*Write a loop program to print the two-digit even numbers,
who's sum of digits are 6.*/

#include<stdio.h>

int main()
{
    int a,b;
    for(int i=11;i<100;i++)
    {
        if(i%2==0)
        {
            a=i%10;
            b=i/10;
            if (a+b==6)
            {
                printf("%d\n",i);
            }
        }
    }
}