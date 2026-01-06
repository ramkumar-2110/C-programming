/*Get multiple numbers from the user and store
them in an array. Stop getting numbers
when the number is 0. if the total
numbers is odd then print the middle
number, otherwise print the average of
the middle two numbers.*/

#include <stdio.h>
int main()  
{
    int x[1000];
    int i,c=0;
    for(i=0;i<1000;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]==0)
        {
            break;
        }
        else
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        printf("%d",x[c/2]);
    }
    else
    {
        int mid1=x[(c/2)-1];
        int mid2=x[c/2];
        int avg=(mid1+mid2)/2;
        printf("%d",avg);
    }
}