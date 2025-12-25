#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y=x-5;
    x=(y%2==1)?x:y; 
    printf("Result = %d",x);
}