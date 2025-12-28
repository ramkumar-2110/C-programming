/*Get a four-digit number from the user and check if 
the first 2 digits and last 2 digits are the same.
If yes, print 1; otherwise, print 0*///

#include <stdio.h>

int main() {
    int x ,y;
    printf("Enter the Number: ");
    scanf("%d", &x);
    y=x%100;
    x/=100;
    y==x && printf("Result = 1");
    y!=x && printf("Result = 0");
    return 0;
}