//print 2 digit number whose one's digit is 5

#include<stdio.h>

void disp_2digit_ones5();
int a=15;
int main()
{
    disp_2digit_ones5();
}

void disp_2digit_ones5()
{
    while(a<100)
    {
      printf("%d\n",a);
      a+=10; 
    } 
}