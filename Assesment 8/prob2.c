//print sum 1 to 6

#include<stdio.h>

int disp_rsum(int x);
int main()
{
    int a=1,b;
    b=disp_rsum(a);
    printf("%d",b);
    return 0;
}

int disp_rsum(int x)
{
    int y=0;
    for(;x<7;x++)
    {
      y=y+x;
    }
    return y;
}