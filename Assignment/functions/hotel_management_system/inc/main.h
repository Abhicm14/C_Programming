#include <stdio.h>
#include <stdlib.h>
#include <validation.h>

extern int avail1, avail2, avail3, avail4;   
extern int booked_rooms;                    
extern int booked_room_type;                 

int menu(void);

void booking(void);
void cancelation(void);
void billing(int rooms, int total_days, int booked_room_type);

int check_valid_date(int d, int m, int y);
int difference_two_dates(int d1, int d2, int m1, int m2, int y1, int y2);


