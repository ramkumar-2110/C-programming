//Get a number from the user and check if the number is less than or equal to 50. If yes, then print 1; otherwise, print 0//

#include <stdio.h>

int main() {
    int x;
    printf("Enter the Number: ");
    scanf("%d", &x);
    x <= 50  && printf("Result = 1\n");
    x > 50 && printf("Result = 0\n");
    return 0;
}