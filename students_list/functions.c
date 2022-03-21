
int get_student_value (int number_of_students)
{
    for(int i=0; i<number_of_students;i++)
    {
        printf("Enter student %d name :", i+1);
        scanf("%s",&students[i].name);
        printf("Enter student %s's speciality :", students[i].name);
        scanf("%s",&students[i].speciality);
        printf("Enter student %s's sex :", students[i].name);
        scanf("%s",&students[i].sex);
        printf("Enter student %s's age :", students[i].name);
        scanf("%d",&students[i].age);

    }
return students[i];
}
