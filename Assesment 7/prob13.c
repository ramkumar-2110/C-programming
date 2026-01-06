//print the reverse of the given number

#include<stdio.h>

void disp_reverse_number(int x);
int main()
{
    int a;
    scanf("%d",&a);
   disp_reverse_number(a);
}

void disp_reverse_number(int x)
{
    for(;x>0;x/=10)
    {
      printf("%d",x%10);
    }
 }