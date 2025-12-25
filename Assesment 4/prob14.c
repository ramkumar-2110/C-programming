#include<stdio.h>
#include<math.h>
int main()
{
 int x,y=0,num,done=0;
 printf("Enter a number : ");
 scanf("%d",&x);
 num=x;
 loop:if(x>9)
    {
        x/=10;
        y+=1;
        goto loop;
    }
 if((num%10)%2==1)
 {
    done=1;
    x=num/pow(10,y);
    x-=1;
    x*=pow(10,y);
    x+=num%(int)pow(10,y);
 }
 if(done==1)
 printf("Result = %d",x);

 else
 printf("Result = %d",num);
}