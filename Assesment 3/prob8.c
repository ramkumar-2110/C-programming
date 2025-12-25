#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%100;
    x/=100;
    if(x==y){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}