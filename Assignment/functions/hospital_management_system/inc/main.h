#include<stdio.h>
#include<stdlib.h>
#include<validation.h>

// General beds (5)
extern int gen1, gen2, gen3, gen4, gen5;
// ICU beds (5)
extern int icu1, icu2, icu3, icu4, icu5;

extern char name1[10],name2[10],name3[10],name4[10],name5[10],name6[10],name7[10],name8[10],name9[10],name0[10];
extern char disease1[10],disease2[10],disease3[10],disease4[10],disease5[10],disease6[10],disease7[10],disease8[10],disease9[10],disease0[10];
extern int age1,age2,age3,age4,age5,age6,age7,age8,age9,age0;

extern int GENERAL_CHARGE;
extern int ICU_CHARGE;
extern int DOCTOR_FEE;

int menu(void);
void viewPatients();
void admitPatient();
void dischargePatient();
void calculateBill();