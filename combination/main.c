#include <stdio.h>
#include <stdlib.h>

int n,r;
int main()
{
    printf("Enter your n then enter your r for your combination.ie nCr!\n");
    scanf("%d%d",&n,&r);
    printf("%dC%d = %d \n",n,r,combination(n,r));

    return 0;
}

int factorial (int num)
{
    int result = 1;
    for (int i=1;i<=num;i++)
    {
        result*=i;
    }
    return result;
}

int combination(int num1,int num2)
{
    while (n<r)
    {
        printf("Please enter your values again and make sure that your n is not less than your r for your combination.ie nCr!\n");
        scanf("%d%d",&n,&r);
    }
    return factorial (num1)/(factorial (num2)*(factorial (num1-num2)));
}
