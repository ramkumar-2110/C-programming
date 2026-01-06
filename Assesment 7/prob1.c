// print 1 to 5 using function

#include<stdio.h>

void disp_assend(int x);

int main()
{
    int x=5;
    disp_assend(x);
}

void disp_assend(int x)
{
    for(int i=1;i<=x;i++ )
    {
        printf("%d\n",i);
    }
}