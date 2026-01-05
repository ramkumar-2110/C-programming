/*Write a program to print the total count of numbers which
are less than 100000 and whose sum of digits is 14.*/

#include<stdio.h>

int main()
{
    int count =0;
    int i=0;
    while(i<100000)
    {
        int sum=0;
        for (int j=i;j!=0;j=j/10)
        {
        sum+=j%10;
        }
        if(sum==14) 
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}