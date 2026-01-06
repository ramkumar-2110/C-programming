//print 2 digit odd number whose sum of the digit are 7

#include<stdio.h>

void disp_2digit_odd_sum7();
int a=10,b,c;
int main()
{
    disp_2digit_odd_sum7();
}

void disp_2digit_odd_sum7()
{
    while(a<100)
    {
        if(a%2==1)
        {
        b=a%10;
        c=a/10;
        if(b+c==7)
        { 
            printf("%d\n",a);
        }
        }   
        a++;
    } 
}