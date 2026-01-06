// print 5 to 1 using function

#include<stdio.h>

void disp_descend(int x);

int main()
{
    int x=0;
    disp_descend(x);
}

void disp_descend(int x)
{
    for(int i=5;i>x;i-- )
    {
        printf("%d\n",i);
    }
}