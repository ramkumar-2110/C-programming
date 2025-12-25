#include <stdio.h>

int main() {
    int x;
    printf("Enter the Number: ");
    scanf("%d", &x);
    x > 50  && printf("Result = 1\n");
    x <= 50 && printf("Result = 0\n");
    return 0;
}
