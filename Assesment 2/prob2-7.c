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
