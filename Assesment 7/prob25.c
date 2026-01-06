//no of single digit prime number in the given number

#include<stdio.h>

void disp_single_digit_prime(int i);
int main()
{
    int a;
    scanf("%d",&a);
    disp_single_digit_prime(a);
}

void disp_single_digit_prime(int i)
{
    int b,c=0,d=0;
    for(;i>0;i/=10)
    {
       b=i%10;
    
       if(b==2)
       {
        c++;
       }
       else if (b==1)
       {
        continue;
       }
       else{
       for(int j=2;j<=b/2;j++)
       {
        if(b%j==0)
        {
             d=1;
             break;
        }
       }
       if(d==0)
       {
        c++;
       }d=0;}
    }
    printf("%d",c);
}