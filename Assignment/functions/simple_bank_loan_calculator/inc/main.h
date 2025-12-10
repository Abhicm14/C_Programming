#include <stdio.h>
#include <stdlib.h>
#include<validation.h>
#include <math.h>   // for pow()

/* -------- Function Prototypes -------- */
int menu(void);
void loan_input(int choice);

float calculate_interest(float amount, float rate, int years);
float calculate_emi(float amount, float rate, int years);

void show_result_simple(float amount, float rate, int years, float interest);
void show_result_emi(float amount, float rate, int years, float emi, float total_payment, float total_interest);
