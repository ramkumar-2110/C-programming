//Get a two-digit number from the user and check if the digit 1 is less than or equal to the digit 0. If yes, print 1; otherwise, print 0//

#include <stdio.h>

int main() {
    int x ,y;
    printf("Enter the Number: ");
    scanf("%d", &x);
    y=x%10;
    x/=10;
    x<=y && printf("Result = 1");
    x>y && printf("Result = 0");
    return 0;
}