#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
   loop: y=x%10;
    x/=10;
    y+=x%10;
    x/=10;
    y+=x%10;
    if(y<10){
    printf("Result = %d",y);
    }
    else{
        x=y;
        goto loop;
    }
}