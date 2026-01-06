//print sum of 6 to 1

#include<stdio.h>

void disp_rsum();
int a=6,b=0;
int main()
{
    disp_rsum();
}

void disp_rsum()
{
    while(a>0)
    {
       b=b+a;
       a--;
    } 
    printf("%d\n",b);
}