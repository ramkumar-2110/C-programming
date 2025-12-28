/*Get a four-digit number from the user and check if the digit 1 and digit 0
are the same and if digit 1 and digit 0 are different.
If yes, print "Success"; otherwise, print "Failure"
Example:
Input: 988   Output: Success
Input: 567   Output: Failure*/

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%10;
    x/=10;
    x%=10;
    if(x==y){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}