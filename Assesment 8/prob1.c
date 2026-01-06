//print sum 1 to 5

#include<stdio.h>

int disp_sum(int x);
int main()
{
    int a=1,b;
    b=disp_sum(a);
    printf("%d",b);
    return 0;
}

int disp_sum(int x)
{
    int y=0;
    for(;x<6;x++)
    {
      y=y+x;
    }
    return y;
}