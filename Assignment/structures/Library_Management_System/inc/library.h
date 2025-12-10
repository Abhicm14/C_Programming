#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<valid.h>

#define MAX_NAME 100

struct Book{
    char title[MAX_NAME];
    char author[MAX_NAME];
    float price;
    int ISBN;
};

extern struct Book *library;
extern int totalbooks;

int menu(void);
void displaybook(struct Book **library,int *count);
void addnewbook(struct Book **library,int *count);
void searchbook(struct Book **library,int *count);
void freelibrary(struct Book **library, int* count);
