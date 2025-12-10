#include<main.h>

void Cancel_Booking()
{
    printf("Enter Flight ID : ");
    scanf("%5s",flightid1);

    if(flightid1 == flightid)
    {
        flightid[0] = '\0';
        name[0] = '\0';
        source1[0] = '\0';
        destination1[0] = '\0';
        
        age =0;
        classType =0;
        distance =0;
        finalFare =0;
        price =0;
        
        printf("Booking cancelled successfully!\n");
    } 
    else 
    {
        printf("No booking found with this Flight ID.\n");
    }

}