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