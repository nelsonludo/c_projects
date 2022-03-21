#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
int main()
{
    int i;
    int g;
    struct student
    {
        char name[20];
        char speciality[3];
        char sex[6];
        int age;
        int datastructure_mark;
        int web_programming_mark;
        int factual_programming_mark;
        int analysis_mark;
        int database_mark;
        int average ;
    };

    int number_of_students;


    printf("Enter number of students : ");
    scanf("%d",&number_of_students);

    struct student students[number_of_students];
    struct student container;

    for(i=0; i<number_of_students;i++)
    {
        printf("Enter student %d name :", i+1);
        scanf("%s",&students[i].name);
        printf("Enter student %s's speciality :", students[i].name);
        scanf("%s",&students[i].speciality);
        /*while (students[i].speciality != {c,s,n}||students[i].speciality != {s,w,e})
            {
                printf("Enter student %s's speciality (either CSN or SWE):", students[i].name);
                scanf("%s",&students[i].speciality);
            }*/
        printf("Enter student %s's sex :", students[i].name);
        scanf("%s",&students[i].sex);
        printf("Enter student %s's age :", students[i].name);
        scanf("%d",&students[i].age);
        printf("Enter student %s's datastructure mark :", students[i].name);
        scanf("%d",&students[i].datastructure_mark);
        printf("Enter student %s's web programming mark :", students[i].name);
        scanf("%d",&students[i].web_programming_mark);
        printf("Enter student %s's factual programming mark :", students[i].name);
        scanf("%d",&students[i].factual_programming_mark);
        printf("Enter student %s's analysis mark :", students[i].name);
        scanf("%d",&students[i].analysis_mark);
        printf("Enter student %s's database mark :", students[i].name);
        scanf("%d",&students[i].database_mark);
        students[i].average =  (students[i].datastructure_mark + students[i].web_programming_mark + students[i].factual_programming_mark + students[i].analysis_mark + students[i].database_mark) / 5;
    }

    for (i=0;i<number_of_students;i++)
    {
        for(g=i+1;g<number_of_students;g++)
        {
            if(students[i].average>students[g].average)
            {
                container = students[i];
                students[i]=students[g];
                students[g]=container;
            }
        }
    }
        printf("name ");
        printf("speciality ");
        printf("sex ");
        printf("age ");
        printf("average \n");

    for(int i=number_of_students-1; i>=0; i--)
    {
        printf("%s ", students[i].name);
        printf("%s ", students[i].speciality);
        printf("%s ", students[i].sex);
        printf("%d ", students[i].age);
        printf("%d \n", students[i].average);
    }
    return 0;
}
