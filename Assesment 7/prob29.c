//lcm of 3 numbers

#include<stdio.h>

int a,b,c,max;
void disp_Lcm3(int a,int b,int c);
int main()
{
    scanf("%d%d%d",&a,&b,&c);
  if(a>b)
    {
       if(a>c)
        max=a;
       else
        max=c;
    }else
    {
        if(b>c)
        max=b;
        else
        max=c;
    }  disp_Lcm3(a,b,c);
}

void disp_Lcm3( int a,int b,int c)
{
   for(int i=max;i<=(a*b*c);i++)
    {
        if((i%a==0)&&(i%b==0)&&(i%c==0))
        {
            printf("%d",i);
            break;
        }
    }
}