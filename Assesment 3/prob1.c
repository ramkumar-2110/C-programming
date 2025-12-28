//Get a number from the user and check if the number equals 50. If yes, the print "Success", otherwise print "Failure"

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x==50){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}