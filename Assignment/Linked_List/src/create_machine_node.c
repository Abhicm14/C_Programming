#include"Eagle.h"

struct Eagle *create_machine_node(int machineid,char machineName[],float start,float stop,float cycle)
{
    struct Eagle *NewMachine = (struct Eagle *)malloc(sizeof(struct Eagle));

    NewMachine -> id = machineid;
    strcpy(NewMachine->name,machineName);
    
    NewMachine -> start = start;
    NewMachine -> stop = stop;
    NewMachine ->cycle = cycle;
    NewMachine ->product_count = calculate_production_count();

    NewMachine ->link = NewMachine;

    return NewMachine;
}