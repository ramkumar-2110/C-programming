/*Get a two-digit number from user and subtract 5 from that number
 if the sum of the digits of the number is odd,
  then print the result. Do not use "if".*/

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int temp;
    temp=x;
    y=x%10;
    x/=10;
    y+=x%10;
    (y%2==1)&&printf("Result = %d",temp-5);
    (y%2!=1)&&printf("Result = %d",temp);
}