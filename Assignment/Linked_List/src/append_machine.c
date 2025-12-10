#include"Eagle.h"

struct Eagle *append_machine(struct Eagle *e_tail,int machineid,char machineName[],float start,float stop,float cycle)
{
    struct Eagle *NewMachine = create_machine_node(machineid,machineName,start,stop,cycle);

    if (e_tail == NULL)
    {
        NewMachine->link = NewMachine;
        return NewMachine; 
    }

    NewMachine ->link = e_tail ->link;
    e_tail ->link = NewMachine;
    e_tail = e_tail ->link;

    return e_tail;
}