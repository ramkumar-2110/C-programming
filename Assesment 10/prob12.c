//Convert an integer array of up to 50 digits to a character array and print using

#include<stdio.h>
#include<string.h>

int main()
{
  int a1[8];
  for(int i=0;i<8;i++)
    {
        scanf("%d",&a1[i]);
    }
    char a2[8];
    for(int i=0;i<8;i++)
    {
        a2[i]=a1[i]+48;
    }
    printf("%s",a2);
}