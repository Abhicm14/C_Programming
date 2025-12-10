#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"valid.h"

#define MAX_SIZE 15

struct Eagle{
    int id;
    char name[MAX_SIZE];
    float start;
    float stop;
    float cycle;
    int product_count;
    struct Eagle *link;
};

struct Plant{
    int id;
    char loc[MAX_SIZE];
    struct Plant *plant_link;
    struct Eagle *machine_link;
};

extern int plantid;
extern char plantlocation[MAX_SIZE];

extern int machineid;
extern char machineName[MAX_SIZE];
extern float start;
extern float stop;
extern float cycle;

extern struct Eagle *e_tail;
extern struct Plant *p_head;

void machine_input();
int timeconversion(float value);
void free_machines_in_plant(struct Eagle *head);
int calculate_production_count(void);
int get_plant_production(struct Plant *p);

// --- Plant Logic ---
struct Plant* create_plant_node(int plantID, char *Plantlocation);
struct Plant* append_plant(struct Plant *head, int plantID, char *Plantlocation);
void create_plants(struct Plant **p_head); 

void add_plant(struct Plant **p_head);
void delete_plant(struct Plant **p_head);
void sort_plants(struct Plant *head);

// --- Machine Logic ---
struct Eagle *create_machine_node(int machineid,char machineName[],float start,float stop,float cycle);
struct Eagle *append_machine(struct Eagle *e_tail,int machineid,char machineName[],float start,float stop,float cycle);
void create_machines(struct Plant *p_head, int target_plant_id); 

void add_machine(struct Plant **p_head);
void delete_machine(struct Plant *p_head);
void update_machine(struct Plant *p_head);
void sort_machines_wrapper(struct Plant *head);
void sort_machines(struct Eagle *head);
struct Eagle* delete_head_machine(struct Eagle *head);
int delete_middle_or_last_machine(struct Eagle *head, int id);

// --- Reporting / Menus ---
void show_reports_menu(struct Plant *p_head);
void print_global_summary(struct Plant *p_head);
void print_plant_report(struct Plant *p_head);
void print_machine_card(struct Plant *p_head);

// Searching
void search_plant_by_id(struct Plant *p_head);
void search_machine_by_id(struct Plant *p_head);