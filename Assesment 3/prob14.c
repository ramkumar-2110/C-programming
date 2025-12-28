/*Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same.
If yes, print "Success"; otherwise, print "Failure"*/

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