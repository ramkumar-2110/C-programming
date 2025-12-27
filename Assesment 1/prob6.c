//Get a two-digit number from the user and print the one's digit.
//Get a three-digit number from the user and print the one's digit.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x%10;
    printf("Result = %d",y);
}