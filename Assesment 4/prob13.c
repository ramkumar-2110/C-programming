//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>

int main()
{
    int n, a, b, count = 1, c;
    scanf("%d", &n);

    a = n;
    b = n % 10;
loop:
    if (a >= 10)
    {
        a = a / 10;
        count = count * 10;
        goto loop;
    }

    c = (n % count) / 10;
    n = b * count + c * 10 + a;
    printf("%d", n);
}
