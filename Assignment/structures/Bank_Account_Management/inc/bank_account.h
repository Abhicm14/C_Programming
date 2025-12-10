#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"valid.h"

#define MAX_Name 50

struct Bankaccount{
    int accountNumber;
    char holderName[MAX_Name];
    float balance;
};

extern struct Bankaccount *accounts;
extern int totalaccounts;

int menu();
void openaccount(struct Bankaccount **accounts,int *count);
void updatebalance(struct Bankaccount **accounts,int *count);
void displayall(struct Bankaccount **accounts,int *count);
void transfermoney(struct Bankaccount **accounts,int *count);
void freeaccounts(struct Bankaccount** accounts, int* count);