#include <stdio.h>
#include <validation.h>

int cycle(void);
int red_light(void);
int yellow_light(void);
int green_light(void);
void run_simulation(int cycles) ;
int total_time(int time1, int time2, int time3);
void menu(int time1, int time2, int time3, int total, int cycle);