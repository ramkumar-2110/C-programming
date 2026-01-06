// print total number of digit in the given input

#include<stdio.h>

void count_total_digits(int x);
int main()
{
    int a;
    scanf("%d",&a);
    count_total_digits(a);
}

void count_total_digits(int x)
{
    int b=0;
    for(;x>0;x/=10)
    {
      b++;
    }
    printf("%d",b);
}