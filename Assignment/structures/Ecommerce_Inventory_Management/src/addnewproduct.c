#include"ecommerce.h"

void addnewproduct(struct product **products,int *count)
{
    struct product *temp = realloc(*products, (*count + 1) * sizeof(struct product));

    if(temp == NULL)
    {
        printf("Memory allocation failed! Out of memory.\n");
        return;
    }

    *products = temp;

    int current = *count;
    int quantity;

    printf("\n--- Add New Product ---\n");

    printf("Enter Product ID : ");
    while(1)
    {
        if(valid_int(&((*products)[current].ProductID)) && (*products)[current].ProductID > 100 && (*products)[current].ProductID < 1000)
        {
            for (int count1 = 0; count1 < *count; count1++)
            {
                if ((*products)[count1].ProductID == (*products)[current].ProductID)
                {
                    printf("Enter Quantity of product u want to add : ");
                    while(!valid_int(&quantity) || quantity < 0)
                    {
                        printf("Invalid! Please enter a valid Quantity\n");
                    }
                    (*products)[current].quantity += quantity;
                    printf("Stock updated successfully!\n");
                    return;
                }
            }
            break;
        }
        else
        {
            printf("Invalid! Enter a positive integer ID: ");
        }
    }

    printf("Enter Product Name: ");  
    fgets((*products)[current].name, MAX_NAME, stdin);
    removeNewline((*products)[current].name);

    while (!valid_string((*products)[current].name)) 
    {
        printf("Error! Name must contain only letters and spaces.\n");
        printf("Enter Product Name: ");
        fgets((*products)[current].name, MAX_NAME, stdin);
        removeNewline((*products)[current].name);
    }

    printf("Enter Product Price : ");
    while(!valid_float(&((*products)[current].price)) || (*products)[current].price <= 0 )
    {
        printf("Invalid! Please enter a valid product price\n");
    }

    printf("Enter Quantity of product : ");
    while(!valid_int(&((*products)[current].quantity)) || (*products)[current].quantity < 0)
    {
        printf("Invalid! Please enter a valid Quantity\n");
    }
 
    printf("\n> Product \"%s\" added successfully!\n\n",(*products)[current].name);
    (*count)++; 
}