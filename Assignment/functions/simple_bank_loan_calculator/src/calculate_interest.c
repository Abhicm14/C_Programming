#include<main.h>

/*
 * Function: calculate_interest
 * ----------------------------
 * Uses Simple Interest formula:
 *     Interest = (Principal × Rate × Time) / 100
 */

float calculate_interest(float amount, float rate, int years)
{
    float interest = (amount * rate * years) / 100.0;
    return interest;
}
