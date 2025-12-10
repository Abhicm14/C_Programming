#include<stdio.h>
#include<stdlib.h>
#include<valid.h>
#include<string.h>

#define MAX_NAME    50

struct product{
    int ProductID;
    char name[MAX_NAME];
    float price;
    int quantity;
};

// External declarations
extern struct product* products;
extern int totalproducts;

int menu(void);
void addnewproduct(struct product **products,int *count);
void sellproduct(struct product **products,int *count);
void displayproducts(struct product** products, int *count);
void totalinventory(struct product **products,int *count, float *sum);
void searchproduct(struct product **products, int *count,const int *productid);
void freeproducts(struct product** products, int* count);