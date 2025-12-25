#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    x=x/10;
    y=x%10;
    printf("Result = %d",y);
}