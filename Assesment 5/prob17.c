/*Write a program to get a number from user, print whether that number is prime,
and sum of digit is equal to 14.
Answer:
Input: 59 Output - Prime & sum of digits is 14
Input: 77 Output - Not Prime but sum of digits is 14
Input: 13 Output-Prime & sum of digits is not 14
Input: 27 Output Not Prime & Sum of Digits is not 14*/

#include<stdio.h>

int main()
{
 int x,a,b,prime=0;
 printf("Enter a number : ");
 scanf("%d",&x);
 a=x%10;
 b=x/10;
 a+=b;
 if(x==2)
 {
    printf("Prime & sum of digits is not 14");
    return 0;
 } 
 for(int i=2;i<x;i++)
 {
 if(x%i==0)
 {
   if(a==14)
   printf("Not prime but sum of digits is 14"); 

   if(a!=14)
   printf("Not Prime & Sum of Digits is not 14");
 }
 if(x%i!=0)
 {
    prime=1;
 }
}
 if(prime==1)
 {
    if(a==14)
   printf("Prime & sum of digits is 14"); 

   if(a!=14)
   printf("Prime & sum of digits is not 14");
 }
}