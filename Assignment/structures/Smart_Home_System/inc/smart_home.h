#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<valid.h>

#define MAX_NAME 50

struct Device{
    int deviceID;
    char deviceName[MAX_NAME];
    int status;
    float powerConsumption;
};

extern struct Device *devices;
extern int totaldevices;

int menu(void);
void addnewdevice(struct Device **devices,int *count);
void totalpower(struct Device **devices,int *count);
void toggledevice(struct Device **devices, int *count);
void freedevices(struct Device **devices, int* count); 