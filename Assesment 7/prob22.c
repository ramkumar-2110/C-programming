// print total  number of two digit odd number in the given number

#include<stdio.h>
void disp_total_odd_digit(int i);
int main()
{
    int a;
   scanf("%d",&a);
   disp_total_odd_digit(a);
}

void disp_total_odd_digit(int i)
   {int b,c=0;
    while(i>=10)
    {
        b=i%100;
        if(b%2==1)
        {
            c++;
        }
        i/=10;
    }printf("%d",c);
    return 0;

}
   