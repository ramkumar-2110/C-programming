/*Get 5 numbers from user and print the sum of all numbers.*/

#include<stdio.h>

int main()
{
    int a[5],sum=0;
    for(int i=0;i<5;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
}