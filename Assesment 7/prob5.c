//print odd number between  1 to 9

#include<stdio.h>

void disp_odd();
int a=1;
int main()
{
    disp_odd();
}

void disp_odd()
{
    while(a<10)
    {
       if(a%2==1)
       {
       printf("%d\n",a);
       }
       a++;
    } 
}