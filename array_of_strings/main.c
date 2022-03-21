#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;

    printf("Specify the number of students to enter!\n");
    scanf("%d",&size);


    char students[size][20];
    printf("enter the name of a student then press : !\n");
    for(i=0;i<size;i++)
    {
        scanf("%s",students[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%s ",students[i]);
    }

}
