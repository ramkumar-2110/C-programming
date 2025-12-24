#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int temp;
    y=x%100;
    x/=100;
    temp=x%10;
    temp*=10;
    x/=10;
    temp+=x%10;
    temp*=100;
    y+=temp;
    printf("Result = %d",y);
}