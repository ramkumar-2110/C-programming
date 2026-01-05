//Get a three-digit number from the user and print the hundred's digit.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x/100;
    printf("Result = %d",y);
}