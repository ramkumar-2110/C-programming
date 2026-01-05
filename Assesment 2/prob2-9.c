//Get a two-digit number from the user and check if the digit 0 is less than the digit 1. If yes, print 1; otherwise, print 0//

#include <stdio.h>

int main() {
    int x ,y;
    printf("Enter the Number: ");
    scanf("%d", &x);
    y=x%10;
    x/=10;
    y<x && printf("Result = 1");
    y>x && printf("Result = 0");
    return 0;
}