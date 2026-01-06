//print 2 digit even number whose sum of the digit are 6

#include<stdio.h>

void disp_2digit_even_sum6();
int a=10,b,c;
int main()
{
    disp_2digit_even_sum6();
}

void disp_2digit_even_sum6()
{
    while(a<100)
    {
        if(a%2==0)
        {
         b=a%10;
         c=a/10;
        if(b+c==6)
        { 
            printf("%d\n",a);
        }
        }
        a++;
    } 
}