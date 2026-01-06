// check prime or not

#include<stdio.h>

void check_prime(int x);
int main()
{
    int a;
    scanf("%d",&a);
    check_prime(a);
}

void check_prime(int x)
{
    int y=0;
    if(x==2)
    {
        printf("Prime");
    }
    else
    {
        for(int i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
              y=1;
              break;
            }
        }
        if(y==0)
        {
            printf("prime");
        }
        else
        {
            printf("not prime");
        }
    }
}