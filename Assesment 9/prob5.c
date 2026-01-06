// Get 5 numbers from the user and print the arrange in ascending order and print the same.

#include <stdio.h>
int main()          
{
    int i,j,k,temp;
    int x[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(k=0;k<5;k++)
    {
        printf("%d ",x[k]);
    }
}