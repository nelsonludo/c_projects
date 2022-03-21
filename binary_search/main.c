#include <stdio.h>
#include <stdlib.h>

    int size = 4;
int main()
{
    int array[4]={1,2,3,4};
    int value = 2;

    int seach = search(array,value,size);
    if(search>=0)
    {
        printf("the value is found at index %d",seach);
    }else
    {
        printf("the value is not found ");
    }
}

int search(int arr[], int value, int size)
{
    int l = 0;
    int r = size - 1;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(value==arr[mid])
        {
            return mid;
        }else if(value < arr[mid])
        {
            r = mid - 1;
        }else
        {
            l = mid + 1;
        }
    }
    return -1;
}
