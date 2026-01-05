/*Write a program to get number from user, print 
whether that number's first two digits 
(ten's digits and one's digit) is prime.
Answer:
Input: 359    Output - Prime
Input: 3577   Output - Not Prime*/

#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int y=x%100;
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