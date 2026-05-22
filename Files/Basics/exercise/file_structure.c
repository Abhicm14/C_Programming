#include<stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp = NULL;

    fp = fopen("student.bin","wb+");

    if(fp == NULL)
    {
        perror("Error Opening file");
        return 1;
    }

    //Store one student structure in a binary file.
    struct Student s6  = {101,"Ravi",89.5};
    struct Student s7;

    fwrite(&s6,sizeof(struct Student),1,fp);

    rewind(fp);

    //Read and display that student structure.
    fread(&s7, sizeof(struct Student),1,fp);

    printf("Roll: %d\n", s7.roll);
    printf("Name: %s\n", s7.name);
    printf("Marks: %.2f\n", s7.marks);
    
    //Store 5 student records in a binary file.
    struct Student s1 = {101,"Amruth",89.50};
    struct Student s2 = {102,"Abhi",79.84};
    struct Student s3 = {103,"Amar",89.54};
    struct Student s4 = {104,"Shambhavi",95.0};
    struct Student s5 = {105,"sannidhi",75.54};

    rewind(fp);

    fwrite(&s1,sizeof(struct Student),1,fp);
    fwrite(&s2,sizeof(struct Student),1,fp);
    fwrite(&s3,sizeof(struct Student),1,fp);
    fwrite(&s4,sizeof(struct Student),1,fp);
    fwrite(&s5,sizeof(struct Student),1,fp);
    
    //Search for a student by roll number.
    int searchRoll = 104; // The roll number we want to find
    struct Student currentStudent;
    int found = 0;

    rewind(fp);

    // Loop reads one student block at a time until end of file (EOF)
    while (fread(&currentStudent, sizeof(struct Student), 1, fp) == 1)
    {
        if (currentStudent.roll == searchRoll)
        {
            found = 1;
            break; // Stop looking once we find a match
        }
    }

    printf("--- Search Results ---\n");
    if (found)
    {
        printf("Student Found!\n");
        printf("Roll: %d\n", currentStudent.roll);
        printf("Name: %s\n", currentStudent.name);
        printf("Marks: %.2f\n", currentStudent.marks);
    }
    else
    {
        printf("Student with Roll Number %d not found.\n", searchRoll);
    }

    fclose(fp);
    return 0;
}