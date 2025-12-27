/*Get a number from the user and subtract 5 from that number if the number's ten's position digit is odd, 
then print the result. Do not use "if".*/

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int temp;
    temp=x;
    x/=10;
    y=x%10;
    (y%2==1)&&printf("Result = %d",temp-5);
    (y%2!=1)&&printf("Result = %d",temp);
}