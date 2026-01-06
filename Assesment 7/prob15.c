/*Write a program to get a number from user and if the last digit
of the number is even print the same number. If the last digit of
the number is odd, then subtract 1 from the last digit and print
the number. (Note: Last digit -MSB)
Answer:
Input: 654324         Output - 654324
Input: 76895439       Output - 66895439
Input: 675            Output - 575*/

#include<stdio.h>

void check_last_digit_odd(int x);
int main()
{
    int a;
    scanf("%d",&a);
    check_last_digit_odd(a);
    
}

void check_last_digit_odd(int x)
{
    if((x%10)%2==0)
    {
        printf("%d",x);

    }
    else
    {
    int z=0,y=1,w=x;
    for(;x>10;x/=10)
    {
        y=y*10;
    }
    z=w-y;
    printf("%d",z);
    }
}