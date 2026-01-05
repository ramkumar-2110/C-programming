//Get a three-digit number from the user, make the one's digit 2, and then print it.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x/10;
    y*=10;
    y+=2;
    printf("Result = %d",y);
}