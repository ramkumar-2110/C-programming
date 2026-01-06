// interchange first and last digit

#include<stdio.h>

void disp_interchange_first_last_digits(int x);
int main()
{
    int a;
    scanf("%d",&a);
   disp_interchange_first_last_digits(a);
}

void disp_interchange_first_last_digits(int x)
{
    int b=1;
   printf("%d",x%10);
   x=x/10;
   for(int i=x;i>10;i/=10)
   {
    b=b*10;
   }
   printf("%d%d",x%b,x/b);

}