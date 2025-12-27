//Get a number from the user, divide the number by 8, and print the remainder.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x%8;
    printf("Result = %d",y);
}