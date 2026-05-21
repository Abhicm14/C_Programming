#include<stdio.h>

int main()
{
    FILE *fp = NULL;

    int roll = 100;
    float marks = 89.5;
    char name[] = "Ravi";

    // "w+" truncates (clears) the file if it already exists
    fp = fopen("student.txt","w+");

    if(fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // 1. Store first student
    fprintf(fp, "Name : %s\n", name);
    fprintf(fp, "Roll : %d\n", roll);
    fprintf(fp, "Marks: %g\n", marks);
    
    rewind(fp);
    
    int roll1;
    float marks1;
    char name1[50];
    
    // Read and display first student
    fscanf(fp, " Name : %49[^\n]", name1);
    fscanf(fp, " Roll : %d", &roll1);
    fscanf(fp, " Marks: %f", &marks1);

    printf("Name: %s\n", name1);
    printf("Roll: %d\n", roll1);
    printf("Marks: %g\n", marks1);
    
    // Move the file pointer back to the beginning to overwrite the 5 students cleanly,
    // OR just let them append. Let's append them seamlessly:
    fprintf(fp, " Name : %s\nRoll : %d\nMarks: %g\n", "Amruth", 101, 84.53);
    fprintf(fp, " Name : %s\nRoll : %d\nMarks: %g\n", "Abhishek", 102, 74.51);
    fprintf(fp, " Name : %s\nRoll : %d\nMarks: %g\n", "Amar", 103, 86.52);
    fprintf(fp, " Name : %s\nRoll : %d\nMarks: %g\n", "shambhavi", 104, 76.54);
    fprintf(fp, " Name : %s\nRoll : %d\nMarks: %g\n", "sannidhi", 105, 73.55);
    
    
    // Read marks from a file and calculate average.
    int read_roll;
    float read_marks;
    char read_name[50];
    
    float total_marks = 0.0;
    int count = 0;

    rewind(fp); // Go back to the very top to read everyone (Ravi + the other 5)

    printf("\n--- Reading Student Records From File ---\n");
    
    // FIX: The loop must match the exact "Label" pattern used to write the file.
    // It will check if all 3 fields are successfully matched per iteration.
    while(fscanf(fp, " Name : %49[^\n]", read_name) == 1 &&
          fscanf(fp, " Roll : %d", &read_roll) == 1 &&
          fscanf(fp, " Marks: %f", &read_marks) == 1) 
    {
        printf("Name: %-10s | Roll: %d | Marks: %.2f\n", read_name, read_roll, read_marks);
        
        // Accumulate marks for the average calculation
        total_marks += read_marks;
        count++;
    }

    // 4. Calculate and display average
    if (count > 0) 
    {
        float average = total_marks / count;
        printf("-----------------------------------------\n");
        printf("Total Marks: %.2f\n", total_marks);
        printf("Average Marks of %d students: %.2f\n", count, average);
    }
    else 
    {
        printf("No data was parsed. Check file structure.\n");
    }

    fclose(fp);
    return 0;
}