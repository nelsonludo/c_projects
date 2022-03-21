#include <stdio.h>
#include <stdlib.h>


int base, power;
int main()
{
    printf("Enter your base\n");
    scanf("%d",&base);
    printf("Enter your power\n");
    scanf("%d",&power);
    printf("%d^%d\n",base,power);
    printf("%d",powerIt(base,power));
    return 0;
}

int powerRec(int num1,int num2)
{
    int result;
    if(num2==0)
    {
        return 1;
    }
    else if(num2==1)
    {
        return num1;
    }
    else
    {
        return result = num1 * powerRec(num1,(num2-1));
    }

}


int powerIt(int num1,int num2)
{
    int result=1;
    if(num2==0)
    {
        return 1;
    }
    else if(num2==1)
    {
        return num1;
    }
    else
    {
        for(int i=1;i<=num2;i++)
    {
        result*=num1;
    }
    return result;
    }

}
