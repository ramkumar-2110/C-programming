//Write a program print total number of single digit Prime numbers

#include<stdio.h>

int main()
{
    int n=0;
    for(int i=2;i<10;i++)
    {
        int f=0;
        for (int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            f++;
        } 
        if(f==0) 
        {
            n++;
        }
    }
printf("%d",n);
}