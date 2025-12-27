//Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use "if".

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x-5;
    (x%2==1)&&printf("Result = %d",y);
    (x%2!=1)&&printf("Result = %d",x);
}