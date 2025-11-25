#include <stdio.h>

int main()
{
    int i,j,b,min,temp,flag;
    int a[6]={54,10,8,45,87,64};
    for (i=0;i<6;i++)
    {
      flag=0;
      min=a[i];
      temp=a[i];
      for(j=i+1;j<6;j++)
      {
          if(a[j]<min){
              min=a[j];
              b=j;
              flag=1;
          }
      }
      if(flag==1){
      a[i]=min;
      a[b]=temp;
      }
    }
    for(i=0;i<6;i++)
    {
        printf("%d  ",a[i]);
    }

}