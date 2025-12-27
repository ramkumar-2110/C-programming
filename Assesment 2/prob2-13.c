/*Get a four-digit number from the user and check if the digit 1 
and digit 0 are the same and if digit 1 and digit 0 are different.
If yes, print 1; otherwise, print 0
Example:
Input: 988    Output: 1
Input: 567    Output: 0  */

#include <stdio.h>

int main() {
    int x ,y;
    printf("Enter the Number: ");
    scanf("%d", &x);
    y=x%10;
    x/=10;
    x%=10;
    y==x && printf("Result = 1");
    y!=x && printf("Result = 0");
    return 0;
}