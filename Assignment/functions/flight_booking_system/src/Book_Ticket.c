#include<main.h>

void Book_Ticket(char source,char destination)
{
    
    if(source == 0 && destination == 0)
    {
        Search_Flights();

        printf("Enter Flight ID : ");
        scanf("%6s",flightid);

        printf("Enter Passanger Name : ");
        scanf("%10s",name);

        while(1)    
        {   
            printf("Enter Age : ");
            age = valid_int();
            if(age == -1)
            {
                continue;
            }
            else
            {
                break;
            }
        }

        while(1)    
        {   
            printf("Enter Booking Class (1. Economy, 2. Business, 3. First Class) : ");
            classType = valid_int();
            if(classType == -1)
            {
                continue;
            }
            else if(classType > 3)
            {
                printf("Invalid Input\n");
                continue;
            }
            else
            {
                break;
            }
        }
        
        flightid1[6] = flightid;
        
    }
    else
    {
        printf("Enter Flight ID : ");
        scanf("%6s",flightid);

        printf("Enter Passanger Name : ");
        scanf("%10s",name);

        while(1)    
        {   
            printf("Enter Age : ");
            age = valid_int();
            if(age == -1)
            {
                continue;
            }
            else
            {
                break;
            }
        }

        while(1)    
        {   
            printf("Enter Booking Class (1. Economy, 2. Business, 3. First Class) : ");
            classType = valid_int();
            if(classType == -1)
            {
                continue;
            }
            else if(classType > 3)
            {
                printf("Invalid Input\n");
                continue;
            }
            else
            {
                break;
            }
        }
        
        flightid1[6] = flightid;

    }
    price = calculate_final_fare(distance, age, classType);

    printTicket(name, flightid, source1, destination1, age, classType, price);
}
