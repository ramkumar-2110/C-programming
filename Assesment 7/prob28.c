//lcm of 2 numbers

#include<stdio.h>

void disp_lcm2 (int x,int y);
int a,b,c;
int main()
{
    scanf("%d %d", &a, &b);
    if(a>b)
    {
    c=a;
    }
    else
    {
      c=b;
    }
    disp_lcm2(a,b);
}

void disp_lcm2(int x,int y)
{
   for(int i=c;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
        {
            printf(" %d\n", i);
            break;
        }
    }
}