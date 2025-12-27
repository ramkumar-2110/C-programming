//Get a four-digit number from user and only reverse the first two digits of the number, then print the number.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x%10;
    y*=10;
    x/=10;
    y+=x%10;
    x/=10;
    x=(x*100)+y;
    printf("Result = %d",x);
}