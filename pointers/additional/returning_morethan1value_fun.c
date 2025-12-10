#include <stdio.h>

// The function takes the array, its size, and two pointers to store the results.
void findMinMax(float temps[], int size, float *pMin, float *pMax) 
{
    // Assume the first element is both min and max to start.
    *pMin = temps[0];
    *pMax = temps[0];
    
    for (int i = 1; i < size; i++) 
    {
        if (temps[i] < *pMin) 
        {
            *pMin = temps[i]; // Update the value at the minimum pointer's address
        }
        if (temps[i] > *pMax) 
        {
            *pMax = temps[i]; // Update the value at the maximum pointer's address
        }
    }
}

int main() 
{
    float temperatures[] = {25.5, 28.0, 22.1, 31.0, 27.8};
    int size = 5;
    
    float minTemp, maxTemp; // Declare variables to hold the results
    
    // Pass the addresses of minTemp and maxTemp to the function.
    findMinMax(temperatures, size, &minTemp, &maxTemp);
    
    printf("Analysis of daily temperatures:\n");
    printf("Lowest Temperature: %.1f\n", minTemp);
    printf("Highest Temperature: %.1f\n", maxTemp);
    
    return 0;
}