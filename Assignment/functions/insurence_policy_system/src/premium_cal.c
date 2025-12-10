#include "main.h"

// Simple premium calculation logic
int calculate_premium(int type, int coverage, int risk) 
{
    int base = 0;

    if (type == 1) {        // Health
        base = 500;
    } else if (type == 2) { // Life
        base = 700;
    } else if (type == 3) { // Vehicle
        base = 600;
    } else {
        base = 400;         // Default
    }

    int premium = base + (coverage / 10) + (risk * 100);
    return premium;
}
