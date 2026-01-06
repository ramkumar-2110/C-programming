/*Get 5 numbers from the user, remove the even numbers, create a new array, and print the same.*/

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
       if(arr1[i]%2==1)
       {
        arr2[a]=arr1[i];
        a++;
       }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr2[i]);
    }
}