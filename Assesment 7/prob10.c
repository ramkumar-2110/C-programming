//print sum of 2 digit odd number whose ten's digit is 7

#include<stdio.h>

void disp_2digit_odd_sum_tens7();
int a=70,b;
int main()
{
    disp_2digit_odd_sum_tens7();
}

void disp_2digit_odd_sum_tens7()
{
    while(a<80)
    {
       if(a%2==1)
       {
        b+=a;
       }
       a++;
    }
     printf("%d\n",b);
}