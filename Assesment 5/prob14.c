//Write a program to get a number from user and interchange the first and last digits and print the result.

#include<stdio.h>

int main()
{
    int a=1,b,c,n;
    scanf("%d",&n);

    for(int i=n;i>9;i/=10)
    {
        a*=10;
    }
    b=n%10;
    c=n/a;
    b*=a;
    n/=10;
    n%=(a/10);
    b+=(n*10);
    b+=c;
    printf("%d",b);
}