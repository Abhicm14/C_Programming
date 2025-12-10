#include<stdio.h>
#include<string.h>
#include<valid.h>
#include<stdlib.h>

#define MAX_SIZE 50

struct student{
    char name[MAX_SIZE];
    int rollno;
    float marks[5];
    float average;
};

extern struct student *class;
extern int totalstrength;

int menu();
void addstudent(struct student **class,int *count);
void updatemarks(struct student **class,int *count);
void calculateaverage(struct student **class, int *count);
void displaytoppers(struct student **class, int *count);
void freeclass(struct student **class, int* count);