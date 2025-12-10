#include<main.h>

char source;
char source1[15] ;
char destination;
char destination1[15];
char flightid[5];
char flightid1[5];
char name[15];
int age;
int classType;
int distance;
int finalFare;
int price;

void main(void)
{
    int choice;
    char ch;

    while(1)
    {
        choice = menu();

        switch(choice)
        {
            case 1:
            {
                Search_Flights();
                break;
            }
            case 2:
            {
                Book_Ticket(source,destination);
                break;
            }
            case 3:
            {
                Cancel_Booking();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("Wrong Choice/Invalid Input\n");
            }
        }
    }
}
