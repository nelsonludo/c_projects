#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int value;
    printf("chose the size of your array!\n");
    scanf("%d",&n);
    int numbers[n];
    printf("Enter your values!\n");
    int i;
    for(i=0;i<n;i++)
	{
		    scanf("%d",&numbers[i]);
	}
	printf("enter the value to be compared!\n");
    scanf("%d",&value);

    int final_num = search(value,numbers,n);

    if (final_num==0)
    {
        printf("the value is not found in the array");
    }else if (final_num == 1)
    {
            printf("the value is  found in the array once");
    }else
    {
            printf("the value is  found in the array %d times",final_num);
    }
    return 0;
}

int search(int sample, int array[],int size)
{
    int i;
    int counter = 0;
	for(i=0 ;i<size;i++)
	{
	    if (array[i]==sample)
        {
            counter++;
        }
	}
	//return counter to know how many times does the sample appears in an array
	if (counter > 0)
		{
		return counter;
		}else
		{
		return 0;
		}
}

