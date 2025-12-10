#include<main.h>

void printTicket(char name[], char flightid[], char source1[], char destination1[], int age, int classType, int price)
 
{
    if(classType == 1)
    {
        printf("\n========================================\n");
        printf("             Flight Ticket  \n");
        printf("========================================\n");
        printf("Passenger Name : %10s\n", name);
        printf("Passenger Age  : %d\n", age);
        printf("Flight ID      : %6s\n", flightid);
        printf("From           : %15s\n", source1);
        printf("To             : %15s\n", destination1);
        printf("Class          : Economy \n");
        printf("Ticket Price   : Rs. %d\n", price);
        printf("----------------------------------------\n");
        printf("     Have a Safe and Pleasant Journey!\n");
        printf("========================================\n\n");
    }
    else if(classType == 2)
    {
        printf("\n========================================\n");
        printf("             Flight Ticket  \n");
        printf("========================================\n");
        printf("Passenger Name : %10s\n", name);
        printf("Passenger Age  : %d\n", age);
        printf("Flight ID      : %6s\n", flightid);
        printf("From           : %15s\n", source1);
        printf("To             : %15s\n", destination1);
        printf("Class          : Business \n");
        printf("Ticket Price   : Rs. %d\n", price);
        printf("----------------------------------------\n");
        printf("     Have a Safe and Pleasant Journey!\n");
        printf("========================================\n\n");
    }
    else if(classType == 3)
    {
        printf("\n========================================\n");
        printf("             Flight Ticket  \n");
        printf("========================================\n");
        printf("Passenger Name : %10s\n", name);
        printf("Passenger Age  : %d\n", age);
        printf("Flight ID      : %6s\n", flightid);
        printf("From           : %15s\n", source1);
        printf("To             : %15s\n", destination1);
        printf("Class          : First Class \n");
        printf("Ticket Price   : Rs. %d\n", price);
        printf("----------------------------------------\n");
        printf("     Have a Safe and Pleasant Journey!\n");
        printf("========================================\n\n");
    }
    else
    {
        printf("Invalid Class Type\n");
    }
}

