/*Write a program to get a 4-digit number from user, 
print whether that number's middle two digits 
(hundred's digit and ten's digit) is prime.
Answer:
Input: 6359    Output - Not Prime
Input: 3537    Output - Prime*/ 

#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int y=x%1000;
    y/=10;
    for(int i=2;i<y/2;i++)
    {
        if(y%i==0)
        {
            printf("not a prime");
            return 0;
        }
    }
    printf("is a prime");
    return 0;
}