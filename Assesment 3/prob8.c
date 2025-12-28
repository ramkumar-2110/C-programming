/*Get a two-digit number from the user and check if the digit 0 and digit 1 are not identical.
If yes, print "Success"; otherwise, print "Failure"*/

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%10;
    x/=10;
    if(y!=x){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}