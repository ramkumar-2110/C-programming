//hcf of 2 numbers

#include<stdio.h>

void disp_count_hcf2(int a,int b);
int main()
{
    int c,d;
    scanf("%d %d",&c,&d);
    disp_count_hcf2(c,d);
}

void disp_count_hcf2(int a,int b)
{
    int temp;
    while(b!=0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d\n", a);
}