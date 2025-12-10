#include<stdio.h>
#include<stdlib.h>
#include<validation.h>

int choice;
int change;
int stockQuantity;
int *stockptr = &stockQuantity;

float balance = 8000.00;
float *balanceptr = &balance;
float amount;

float *priceList;
int numProducts;

int size;

int target;
int count;

int num1;
int num2;

int largest;
int sum;

void menu(void);
void updateStock(int *StockPtr,int quantity);
void processTransaction(float *balancePtr,float amount);
void calculatingPrices(float *priceList,int numproducts);
void reverseArray(int *arr,int size);
int countOccurences(int *arr,int size,int target);
void swap(int *num1, int *num2);
int findLargest(int *arr,int size);
int sumArray(int *arr,int size);

void calculator(void);
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
