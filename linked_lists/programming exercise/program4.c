#include <stdio.h>
#include <string.h>

// Structure definition for Employee
struct Employee {
    char name[25];
    int age;
    int basic;
    float da;           // Dearness Allowance
    float hra;          // House Rent Allowance
    float totalSalary;  // Total Salary
};

// Function prototypes
void inputRecords(struct Employee emp[], int n);
void calculateSalary(struct Employee emp[], int n);
void sortBySalary(struct Employee emp[], int n);
void displayRecords(struct Employee emp[], int n);
void swapEmployees(struct Employee *a, struct Employee *b);

int main() {
    const int NUM_EMPLOYEES = 5;
    struct Employee employees[NUM_EMPLOYEES];
    
    printf("=============================================\n");
    printf("       EMPLOYEE SALARY MANAGEMENT SYSTEM\n");
    printf("=============================================\n\n");
    
    // Step 1: Input employee records
    inputRecords(employees, NUM_EMPLOYEES);
    
    // Step 2: Calculate total salary for each employee
    calculateSalary(employees, NUM_EMPLOYEES);
    
    // Display records before sorting
    printf("\n=============================================\n");
    printf("         RECORDS BEFORE SORTING\n");
    printf("=============================================\n");
    displayRecords(employees, NUM_EMPLOYEES);
    
    // Step 3: Sort employees by total salary in descending order
    sortBySalary(employees, NUM_EMPLOYEES);
    
    // Step 4: Display sorted records
    printf("\n=============================================\n");
    printf("   RECORDS AFTER SORTING (Descending Order)\n");
    printf("        (Sorted by Total Salary)\n");
    printf("=============================================\n");
    displayRecords(employees, NUM_EMPLOYEES);
    
    return 0;
}

// Function to input employee records
void inputRecords(struct Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter Details for Employee %d ---\n", i + 1);
        
        // Input name
        printf("Enter Name: ");
        scanf(" %[^\n]s", emp[i].name);  // To accept name with spaces
        
        // Input age
        printf("Enter Age: ");
        scanf("%d", &emp[i].age);
        
        // Input basic salary
        printf("Enter Basic Salary: ");
        scanf("%d", &emp[i].basic);
    }
}

// Function to calculate DA, HRA and Total Salary
void calculateSalary(struct Employee emp[], int n) {
    printf("\n\n--- Calculating Salaries ---\n");
    
    for (int i = 0; i < n; i++) {
        // DA = 10% of Basic
        emp[i].da = (float)emp[i].basic * 10 / 100;
        
        // HRA = 5% of Basic
        emp[i].hra = (float)emp[i].basic * 5 / 100;
        
        // Total Salary = Basic + DA + HRA
        emp[i].totalSalary = emp[i].basic + emp[i].da + emp[i].hra;
        
        printf("Employee %d (%s): Basic=%d, DA=%.2f, HRA=%.2f, Total=%.2f\n",
               i + 1, emp[i].name, emp[i].basic, emp[i].da, emp[i].hra, emp[i].totalSalary);
    }
}

// Function to sort employees by total salary in descending order
void sortBySalary(struct Employee emp[], int n) {
    // Using Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // For descending order, swap if current salary is less than next
            if (emp[j].totalSalary < emp[j + 1].totalSalary) {
                swapEmployees(&emp[j], &emp[j + 1]);
            }
        }
    }
}

// Function to swap two employee records
void swapEmployees(struct Employee *a, struct Employee *b) {
    struct Employee temp;
    
    // Copy all fields
    strcpy(temp.name, a->name);
    temp.age = a->age;
    temp.basic = a->basic;
    temp.da = a->da;
    temp.hra = a->hra;
    temp.totalSalary = a->totalSalary;
    
    strcpy(a->name, b->name);
    a->age = b->age;
    a->basic = b->basic;
    a->da = b->da;
    a->hra = b->hra;
    a->totalSalary = b->totalSalary;
    
    strcpy(b->name, temp.name);
    b->age = temp.age;
    b->basic = temp.basic;
    b->da = temp.da;
    b->hra = temp.hra;
    b->totalSalary = temp.totalSalary;
}

// Function to display employee records
void displayRecords(struct Employee emp[], int n) {
    printf("\n+-----+-------------------------+------+------------+\n");
    printf("| No. |          Name           | Age  | Total Sal  |\n");
    printf("+-----+-------------------------+------+------------+\n");
    
    for (int i = 0; i < n; i++) {
        printf("| %3d | %-23s | %4d | %10.2f |\n",
               i + 1,
               emp[i].name,
               emp[i].age,
               emp[i].totalSalary);
    }
    
    printf("+-----+-------------------------+------+------------+\n");
}