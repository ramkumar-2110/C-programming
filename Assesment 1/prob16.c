#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x/10;
    y*=10;
    y+=2;
    printf("Result = %d",y);
}