#include"bank_account.h"

void freeaccounts(struct Bankaccount** accounts, int* count) 
{
    if (*accounts != NULL) 
    {
        free(*accounts);
        *accounts = NULL;
    }
    *count = 0;
}