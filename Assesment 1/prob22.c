//Get a three-digit number from the user and make the ten's digit as 0, then print it.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x%10;
    x/=100;
    x*=100;
    y+=x;
    printf("Result = %d",y);
}