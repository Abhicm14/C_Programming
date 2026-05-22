#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    int choice;
    int found;
    int searchKey;
    float total;
    int count;
    float average;

    FILE *fp = NULL;

    while(1)
    {
        printf("\n*****Welcome to Student Marks Management System(SMMS)*****\n");
        printf("1.Add student record\n");
        printf("2.Display all student records\n");
        printf("3.Search student by roll number\n");
        printf("4.Calculate class average\n");
        printf("5.Exit\n");

        printf("Enter Your Choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            struct student s1;
            fp = fopen("students.txt","a");

            if(fp == NULL)
            {
                perror("ERROR while opening file");
                continue;
            }

            printf("Enter roll number of the student : ");
            scanf("%d",&s1.rollno);

            // Safer way to clear the newline character left by scanf
            while (getchar() != '\n'); 

            printf("Enter name of student : ");
            fgets(s1.name, sizeof(s1.name), stdin);
            s1.name[strcspn(s1.name, "\n")] = '\0';

            printf("Enter marks of student : ");
            scanf("%f",&s1.marks);

            fprintf(fp, "%d,%s,%.2f\n", s1.rollno, s1.name, s1.marks);
            fclose(fp);

            printf("Student record added successfully\n");
        }
        else if(choice == 2)
        {
            struct student s2;
            fp = fopen("students.txt","r"); // rewind(fp) removed

            if(fp == NULL)
            {
                perror("Error while opening file");
                continue;
            }

            printf("\nRecords of all the students\n");
            printf("Roll No\t| Name\t\t| Marks\n");
            printf("---------------------------------------\n");
            
            while(fscanf(fp, "%d,%49[^,],%f", &s2.rollno, s2.name, &s2.marks) == 3)
            {
                printf("%d\t| %s\t| %g\n", s2.rollno, s2.name, s2.marks);
            }

            fclose(fp);
        }
        else if(choice == 3)
        {
            found = 0;
            struct student s2;
            fp = fopen("students.txt","r"); // rewind(fp) removed

            if(fp == NULL)
            {
                perror("Error while opening file");
                continue;
            }

            printf("Enter roll no of student : ");
            scanf("%d",&searchKey);

            // Fixed the fscanf format string to handle commas
            while(fscanf(fp, "%d,%49[^,],%f", &s2.rollno, s2.name, &s2.marks) == 3)
            {
                if(s2.rollno == searchKey)
                {
                    printf("Student Found!\nRoll No: %d\t| Name: %s\t| Marks: %g\n", s2.rollno, s2.name, s2.marks);
                    found = 1;
                    break;
                }  
            }

            if(found == 0)
            {
                printf("Student not found\n");
            }

            fclose(fp);
        }
        else if(choice == 4)
        {
            struct student s2;
            fp = fopen("students.txt","r"); // rewind(fp) removed

            if(fp == NULL)
            {
                perror("Error while opening file");
                continue;
            }

            total = 0;
            count = 0;

            // Fixed the fscanf format string to handle commas
            while(fscanf(fp, "%d,%49[^,],%f", &s2.rollno, s2.name, &s2.marks) == 3)
            {
                total += s2.marks;
                count++;
            }

            if(count > 0)
            {
                average = total/count;
                printf("Class Average : %g\n",average);
            }
            else
            {
                printf("No student records available\n");
            }

            fclose(fp);
        }
        else if(choice == 5)
        {
            printf("Thanks for using SMMS\n");
            exit(0);
        }
        else
        {
            printf("Invalid Choice, Enter again\n");
        } 
    }
    return 0;
}