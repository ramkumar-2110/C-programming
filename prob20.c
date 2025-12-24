#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int temp;
    temp=x;
    y=x%10;
    y+=x/100;
    printf("Result = %d",(y%2==0)?temp-5:temp);
}