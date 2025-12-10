#include<main.h>

void run_simulation(int cycles) 
{
    int time1;
    int time2; 
    int time3;
    int total_cycle_time;
    int total_simulation_time = 0;

    printf("\n=== Welcome to Traffic Light System ===\n");

    for (int count = 1; count <= cycles; count++) 
    {
        printf("\n--- Cycle no : %d ---\n", count);
        time1 = red_light();
        time2 = yellow_light();
        time3 = green_light();
        printf("\n");

        total_cycle_time = total_time(time1, time2, time3);
        total_simulation_time += total_cycle_time;

        menu(time1, time2, time3, total_cycle_time, count);
    }
    
    printf("\nThe total time taken for %d cycles is %d seconds\n", cycles, total_simulation_time);
}