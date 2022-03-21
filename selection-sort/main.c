#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp,min;
    int array[5]={2,5,1,22,3};
    int n=5;

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(array[j]>array[min])
            {
                min=j;
            }
        }

        temp=array[min];
        array[min]=array[i];
        array[i]=temp;
    }

    for (i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

    /*
    in ascending order
    for (i=n-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }*/

    return 0;
}
