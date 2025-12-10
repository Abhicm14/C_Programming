#include <stdio.h>

// When an array is passed to a function, it "decays" into a pointer.
// So, `int scores[]` is treated the same as `int *scores`.
// We MUST pass the size separately because the function can't know it otherwise.
float calculateAverage(int scores[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += scores[i];
    }
    // Cast one of the numbers to float to ensure floating-point division.
    return (float)sum / size;
}

int main() 
{
    int testScores[] = {88, 92, 75, 100, 85, 95};
    int numStudents = 6;
    
    float average = calculateAverage(testScores, numStudents);
    
    printf("The average score for the class is: %.2f\n", average);
    
    return 0;
}