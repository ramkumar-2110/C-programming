/*Write a program to get a number from user and if the last digit
of the number is even print the same number. If the last digit of
the number is odd, then subtract 1 from the last digit and print
the number. (Note: Last digit -MSB)
Answer:
Input: 654324         Output - 654324
Input: 76895439       Output - 66895439
Input: 675            Output - 575*/

#include <stdio.h>
int main()
{
    int n,i,a,c,l,d = 1,r;
    scanf("%d", &n);
    a = n;
    l = n % 10;
    if(l%2 == 1)
    {
     for(i=a;i >= 10;i/=10)
       { 
        d = d * 10;
       }
       i=i-1;
       c=n%d;
       r=i*d+c;
       printf("%d",r);
    }
    else
    printf("%d",n);

}