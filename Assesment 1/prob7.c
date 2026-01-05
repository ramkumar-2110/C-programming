//Get a two-digit number from the user and print the ten's digit.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x/10;
    printf("Result = %d",y);
}