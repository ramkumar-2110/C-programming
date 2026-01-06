//print sum of 1 to 5

#include<stdio.h>

void disp_sum();

int a=0,b=0;

int main()
{
    disp_sum();
}

void disp_sum()
{
    while(a<5)
    {
       a++;
       b=b+a;
    } 
    printf("%d\n",b);
}