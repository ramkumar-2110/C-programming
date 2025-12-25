#include <stdio.h>
#include <math.h>

int main() {
    int num, first=10, last=10, digits=0, middle=10, result=10,x;
    printf("Enter a number: ");
    scanf("%d", &num);
    x=num;
    loop:if(x>9)
    {
        x/=10;
        digits+=1;
        goto loop;
    }
    last = num % 10;                      
    first = num / pow(10, digits); 

    middle = num % (int)pow(10, digits); 
    middle = middle / 10;                

    result = last * pow(10, digits) + middle * 10 + first;

    printf("Result = %d\n", result);

    return 0;
}
