#include<stdio.h>
#include <stdbool.h>
#include<stdlib.h>

struct Student{
    int rollno;
    char name[50];
    float marks;
    bool is_deleted;
};

void addStudent();
void displayAll();
void searchStudent();
void updateMarks();
void deleteStudent();
int menu_display();

int main()
{
    int choice;

    while(1)
    {
        choice = menu_display();

        switch(choice)
        {
            case 1:
            {
                addStudent();
                break;
            }
            case 2:
            {
                displayAll();
                break;
            }    
            case 3:
            {
                searchStudent();
                break;
            }
            case 4:
            {
                updateMarks();
                break;
            }
            case 5:
            {
                deleteStudent();
                break;
            }
            case 6:
            {
                printf("Thanks for Using SDMS Portal\n");
                exit(0);
            }
            default:
            {
                printf("Invalid Choice!\n");
            }
        }
    }
   return 0;
}

void addStudent()
{
    FILE *fp = NULL;
    struct Student s;

    fp = fopen("students.dat","ab");

    if(fp == NULL)
    {
        perror("ERROR while opening file");
        return;
    }

    printf("Enter roll number of the student : ");
    scanf("%d",&s.rollno);

    // Safer way to clear the newline character left by scanf
    while (getchar() != '\n'); 

    printf("Enter name of student : ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter marks of student : ");
    scanf("%f",&s.marks);

    s.is_deleted = false;

    fwrite(&s, sizeof(struct Student), 1, fp);
    fclose(fp);

    printf("Student record added successfully\n");
}

void displayAll()
{
    FILE *fp = NULL;

    fp = fopen("students.dat","rb");

    if(fp == NULL)
    {
        perror("No records found");
        return;
    }

    struct Student s;

    while(fread(&s,sizeof(struct Student),1,fp) == 1)
    {
        if(s.is_deleted == false)
        {
            printf("%d\t| %s\t| %g\n", s.rollno, s.name, s.marks);
        }
    }

    fclose(fp);
}

void searchStudent()
{
    FILE *fp = NULL;

    int rollno;

    printf("Enter the student Roll number to Search :");
    scanf("%d",&rollno);

    fp = fopen("students.dat","rb");

    if(fp == NULL)
    {
        perror("No records found");
        return;
    }

    bool found = false;

    struct Student s;

    while(fread(&s,sizeof(struct Student),1,fp) == 1)
    {
        if(s.rollno == rollno && s.is_deleted == false)
        {
            printf("Student Found :\n %d\t| %s\t| %g\n", s.rollno, s.name, s.marks);
            found = true;
            break;
        }
    }

    if(found == false)
    {
        printf("Record Not Found\n");
    }
    fclose(fp);
}

void updateMarks()
{
    FILE *fp = NULL;

    int rollno;

    printf("Enter the student Roll number to Update Marks :");
    scanf("%d",&rollno);

    fp = fopen("students.dat","rb+");

    if(fp == NULL)
    {
        perror("No records found");
        return;
    }

    bool found = false;
    float marks;

    struct Student s;

    while(fread(&s,sizeof(struct Student),1,fp) == 1)
    {
        if(s.rollno == rollno && s.is_deleted == false)
        {
            printf("Enter the Marks to Update : ");
            scanf("%f",&marks);

            s.marks = marks;

            found = true;

            long pos = ftell(fp)-sizeof(struct Student);
            fseek(fp,pos,SEEK_SET);

            fwrite(&s,sizeof(struct Student),1,fp);
            break;
        }
    }

    if(found)
    {
        printf("Marks updated!.\n");
    }
    else
    {
        printf("Record Not Found\n");
    }
    fclose(fp); 
}

void deleteStudent()
{
    FILE *fp = NULL;

    int rollno;

    printf("Enter the student Roll number to delete :");
    scanf("%d",&rollno);

    fp = fopen("students.dat","rb+");

    if(fp == NULL)
    {
        perror("No records found");
        return;
    }

    bool found = false;

    struct Student s;

    while(fread(&s,sizeof(struct Student),1,fp) == 1)
    {
        if(s.rollno == rollno && s.is_deleted == false)
        {
            s.is_deleted = true;
            found = true;

            long pos = ftell(fp)-sizeof(struct Student);
            fseek(fp,pos,SEEK_SET);

            fwrite(&s,sizeof(struct Student),1,fp);
            break;
        }
    }

    if(found)
    {
        printf("Record Deleted.\n");
    }
    else
    {
        printf("Record Not Found\n");
    }
    fclose(fp);
}

int menu_display()
{
    int choice;

   printf("\n*** Welcome to Student Database Portal ***\n");
   printf("1. Add Student\n");
   printf("2. Display All Students\n");
   printf("3. Search Student\n");
   printf("4. Update Marks\n");
   printf("5. Delete Record Logically\n");
   printf("6. Exit\n");
   
   printf("Enter your choice : ");
   scanf("%d",&choice);

   return choice;
}
