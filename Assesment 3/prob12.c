/*Get a two-digit number from the user and check if the digit 1 is greater than or equal to the digit 0.
If yes, print "Success"; otherwise, print "Failure"*/

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%10;
    x/=10;
    if(x>=y){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}