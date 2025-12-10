#include<main.h>

int calculate_final_fare(int distance, int age, int classType) 
{
    int baseFare = calculate_base_fare(distance);
    float finalFare = baseFare;

    if (classType == 1) 
    {             
        finalFare = baseFare;         
    } 
    else if (classType == 2) 
    {        
        finalFare = baseFare + (0.40 * baseFare);  
    } 
    else if (classType == 3) 
    {        
        finalFare = baseFare + (1.00 * baseFare);  
    } 
    else 
    {
        printf("Invalid class type!\n");
        return -1;
    }

    if (age < 18) 
    {                   
        finalFare = finalFare * 0.50; 
    } 
    else if (age > 80) 
    {              
        finalFare = finalFare * 0.70; 
    } 
    else if (age >= 18 && age <= 80) 
    {
        finalFare = finalFare * 1.00; 
    } 
    else 
    {
        printf("Invalid age!\n");
        return -1;
    }
    return (int)finalFare; 
}

int calculate_base_fare(int distance)
{
    int baseprice;

    baseprice = (distance*4);

    return baseprice;
}
