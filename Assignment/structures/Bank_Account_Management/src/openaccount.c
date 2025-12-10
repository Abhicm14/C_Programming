#include"bank_account.h"

void openaccount(struct Bankaccount **accounts,int *count)
{

    struct Bankaccount *temp = realloc(*accounts,(*count+1) * sizeof(struct Bankaccount));

    if(temp == NULL)
    {
        printf("Memory allocation failed! Out of memory.\n");
        return;
    }

    *accounts = temp;

    int current = *count;

    printf("\n===Open Account===\n");

    printf("Enter Account Number : ");
    while(!valid_int(&(*accounts)[current].accountNumber) || (*accounts)[current].accountNumber < 1000 || (*accounts)[current].accountNumber  < 0)
    {
        printf("Invalid! Please enter a valid Number greater than 1000\n");
        printf("Enter Account Number : ");
    }

    printf("Enter Holder Name : ");
    fgets((*accounts)[current].holderName, MAX_Name, stdin);
    removeNewline((*accounts)[current].holderName);

    while(!valid_string((*accounts)[current].holderName))
    {
        printf("Error! Name must contain only letters and spaces.\n");
        printf("Enter Holder Name : ");
        fgets((*accounts)[current].holderName, MAX_Name, stdin);
        removeNewline((*accounts)[current].holderName);
    }

    printf("Enter Initial Balance : ");
    while(!valid_float(&((*accounts)[current].balance)) || (*accounts)[current].balance <= 0 )
    {
        printf("Initial balance cannot be Zero/Negative. \n");
    }

    (*count)++;
    printf("\nSuccess: Account created successfully!\n");
}