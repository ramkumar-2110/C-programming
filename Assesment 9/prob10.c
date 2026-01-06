/*Get 5 numbers from the user, remove the prime numbers, and create a new array, then print the same.*/

#include<stdio.h>

int main()
{
    int a=0;
    int arr1[5];
    int arr2[a];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<5;i++)
    {
       
        for(int j=2;j<arr1[i]/2;j++)
        {
            if(arr1[i]%j==0)
            {
                arr2[a]=arr1[i];
                a++;
                break;
            }
        }
       
    }
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr2[i]);
    }
}