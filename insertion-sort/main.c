#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp;
    int array[5]={12,5,1,26,2};
    int n=5;

    for(i=1;i<n;i++)
    {
        temp=array[i];
        j=i-1;
        while(array[j]>temp&&j>=0)
        {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=temp;
    }

    for (i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
