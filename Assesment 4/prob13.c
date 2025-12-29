//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>

int main()
{
    int n, temp, last, digits = 1, middle;
    scanf("%d", &n);

    temp = n;
    last = n % 10;
loop:
    if (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
        goto loop;
    }

    middle = (n % digits) / 10;
    n = last * digits + middle * 10 + temp;
    printf("%d", n);
}
