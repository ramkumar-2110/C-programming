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
