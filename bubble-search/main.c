#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5]={14,5,17,20,6};
    int n=5;
    int flag,holder;

    for (int i=0;i<n-1;i++)
    {
        flag=0;
        for (int j=0;j<n-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                holder=array[j];
                array[j]=array[j+1];
                array[j+1]=holder;
                flag=1;
            }
        }

    }
        if (flag==0)
        {
            for(int i=0;i<n;i++)
            {
            printf(" %d",array[i]);
            }
        }
    return 0;
}
