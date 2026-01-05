/*Get a three-digit number from the user and subtract five from 
that number if one's digit number and 100's digit number are odd,
then print the result. Do not use “if”.*/

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    int temp;
    temp=x;
    y=x%10;
    y+=x/100;
    (y%2==0)&&printf("Result = %d",temp-5);
    (y%2!=0)&&printf("Result = %d",temp);
}