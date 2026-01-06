//no of single digit perfect square number in the given number

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
       b=i%10;
       if(b==1||b==4||b==9)
       {
        c++;
       }
    }printf("%d",c);
}