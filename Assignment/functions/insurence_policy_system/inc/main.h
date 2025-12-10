#include<stdio.h>
#include<stdlib.h>
#include<validation.h>

// Global variables (only one policy at a time)
extern int policy_active;
extern int claim_status;
extern int policy_type;
extern int coverage_amount;
extern int risk_factor;
extern int premium;

// Function prototypes
void purchase_policy();
int calculate_premium(int type, int coverage, int risk);
void file_claim();
void view_status();