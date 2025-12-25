#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%10;
    x/=10;
    if(y<x){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}