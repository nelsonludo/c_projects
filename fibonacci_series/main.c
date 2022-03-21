#include <stdio.h>
#include <stdlib.h>

int current;
int main()
{
    printf("Enter any number\n");
    scanf("%d",&current);
    printf("fib%d\n",current);
    printf("%d",fibonacciIt(current));
    return 0;
}
int fibonacciRec(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
        return num=fibonacciRec(num-1) + fibonacciRec(num-2);
    }
}

int fibonacciIt(int num)
{
    int preprevious=0, previous=1,current;
    for(int i=2;i<=num;i++)
    {
        current = preprevious + previous;
        preprevious = previous;
        previous = current;
    }
    return current;
}
