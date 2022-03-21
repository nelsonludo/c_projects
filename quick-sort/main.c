#include <stdio.h>
#include <stdlib.h>

void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int array[],int lowr_bound,int upper_bound)
{
    int pivote= array[lowr_bound];
    int start= lowr_bound;
    int end= upper_bound;

    while(start<end)
    {
        while(array[start]<=pivote)
        {
            start++;
        }
        while(array[end]>pivote)
        {
            end--;
        }
        if(start<end)
        {
            swap(array[start],array[end]);
        }
    }
    swap(array[lowr_bound],array[end]);

    return end;
}

int quickSort(int array[],int lowr_bound,int upper_bound)
{
    if (lowr_bound<upper_bound)
    {
        int container = partition(array,lowr_bound,upper_bound);
        quickSort(array,lowr_bound,container-1);
        quickSort(array,container+1,upper_bound);
    }
    return 0;
}

int main()
{

    int i;
    int array_main[5]={5,1,3,4,2};
    int n=5;

    quickSort(array_main,0,n-1);


    for (i=0;i<n;i++)
    {
        printf("%d ",array_main[i]);
    }
    return 0;
}

    /*
    in ascending order
    for (i=n-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }*/

