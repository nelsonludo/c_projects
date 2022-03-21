#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,j,result=0;
    //getting the size of the array
    printf("enter the size of your table!\n");
    scanf("%d",&size);

    int anyname[size];
    //getting the elements of the array
    printf("enter the elements of your table one by one!\n");
    //get
    for(i=0;i<size;i++)
    {
        scanf("%d",&anyname[i]);
    }

    //print the elements
    for(i=0;i<size;i++)
    {
        printf("%d, ",anyname[i]);
    }

    //calculate and print sum
    for(i=0;i<size;i++)
    {
        result+=anyname[i];
    }
    printf("\n Your sum is :%d, \n",result);

    //sorting and printing the array
    for(i=0;i<size;i++)
    {
        int temp;
        for(j=i+1;j<size;j++)
        {
            if(anyname[i]>anyname[j])
            {
                temp = anyname[i];
                anyname[i] = anyname[j];
                anyname[j] = temp;
            }

        }
        printf("%d ",anyname[i]);
    }




    return 0;
}
