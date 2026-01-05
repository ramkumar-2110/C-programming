/*Get a three-digit number from user. If the sum of the digits is less than 10,
then print the sum, otherwise add the digits of the sum.
If the sum of the digits is less than 10, then print the sum,
otherwise add the digits of the sum, and print the sum.
Note: The result should always be a single digit only.
Example:
Input: 123-Output: 6
Input: 149 - Output: 5 ( 149/1 + 4 + 9 =14: 1+4 = 5)
Input: 991 - Output: 1 (991: 9 + 9 + 1 = 19 1+9 = 10: 1+0 = 1)*/

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