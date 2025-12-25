#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int temp;
    temp=x;
    x/=10;
    y=x%10;
    printf("Result = %d",(y%2==1)?temp-5:temp);
}