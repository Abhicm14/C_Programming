#include <stdio.h>

int main() 
{
    float scores[5] = {68.5, 85.0, 92.5, 75.0, 88.0};
    
    // Create a pointer to the start of the array
    float *pScores = scores;
    
    printf("--- Original Scores ---\n");
    for (int i = 0; i < 5; i++) {
        // We can use pScores[i] just like we would use scores[i].
        // This is often more readable than *(pScores + i).
        printf("Subject %d: %.1f\n", i + 1, pScores[i]);
    }
    
    // Update scores using subscript notation on the pointer
    printf("\nApplying a curve...\n");
    pScores[1] += 5.0; // Update score for the 2nd subject (index 1)
    pScores[3] += 3.0; // Update score for the 4th subject (index 3)
    
    printf("\n--- Updated Scores ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.1f\n", i + 1, pScores[i]);
    }
    
    return 0;
}
