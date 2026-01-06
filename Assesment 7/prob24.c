//no of two digit perfect square number in the given number

#include<stdio.h>

void disp_single_digit_square(int i);
int main()
{
    int a;
    scanf("%d",&a);
    disp_single_digit_square(a);
}

void disp_single_digit_square(int i)
{
    int b,c;
    for(;i>0;i/=10)
    {
       b=i%100;
       for(int j=1;j<10;j++)
       {
         if((j*j)==b)
         {
            c++;
            break;
         }
       }
    }printf("%d",c);
}