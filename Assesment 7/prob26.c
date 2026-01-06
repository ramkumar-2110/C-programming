// print biggest 4 digit number which is divisible by 7 and 9

#include<stdio.h>

void disp_biggest_4digit_div7_9(int x);
int main()
{
    int a=9999;
    disp_biggest_4digit_div7_9(a);
}

void disp_biggest_4digit_div7_9(int x)
{
   for(;x>0;x--)
   {
    if((x%7==0)&&(x%9==0))
    {
        printf("%d",x);
        break;
    }
   }
}