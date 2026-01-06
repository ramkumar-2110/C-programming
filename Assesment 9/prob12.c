/*Get multiple numbers from the user and store them in an array.
Stop when the number is 0. Print the total numbers entered
by the user and print the sum of numbers.*/

#include <stdio.h>
int main()
{
    int x[1000];
    int i,c=0,d=0;
    for(i=0;i<1000;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]==0)
        {
            break;
        }
        else
        {
            d=d+x[i];
            c++;
        }
    }
    printf("%d\n",c);
    printf("%d",d);

}