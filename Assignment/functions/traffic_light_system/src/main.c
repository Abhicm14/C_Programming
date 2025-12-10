/*
===============================================================================
Project Name : Traffic Light Control System
File Name    : main.c
Author       : Abhishek C M
Date         : 10/09/2025
Description  :

    The Traffic Light Control System simulates the behavior of traffic signals
    in a real-world intersection. It cycles through red, yellow, and green lights
    based on defined timing intervals. The system also calculates total cycle
    time and simulates automatic transitions. This project demonstrates use of
    modular programming, menu-driven control, and time-based simulation using C,
    built with makefiles for static and dynamic executables.
===============================================================================
*/

#include<main.h>

int main(void) 
{
    int cycles;

    cycles = cycle();
    run_simulation(cycles);
    
    return 0;
}
