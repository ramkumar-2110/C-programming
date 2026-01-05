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
    int i=2;
    while(i<y/2)
    {
        if(y%i==0)
        {
            printf("Notprime");
            return 0;
        }
        i++;
    }
    printf("Prime");
    return 0;
}