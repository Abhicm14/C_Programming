#include<stdio.h>
#include<stdlib.h>
#include<validation.h>
#include<string.h>

extern char source;
extern char source1[];
extern char destination;
extern char destination1[];
extern char flightid[5];
extern char flightid1[5];
extern char name[15];
extern int age;
extern int classType;
extern int distance;
extern int finalFare;
extern int price;

int menu();
void Search_Flights();
void source_station();
void destination_station();
void Book_Ticket(char source,char destination);
int calculate_final_fare(int distance, int age, int classType);
int calculate_base_fare(int distance);
void Cancel_Booking();
void printTicket(char name[], char flightid[],char source1[], char destination1[], int age, int classType, int price);
