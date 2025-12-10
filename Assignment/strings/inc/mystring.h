#include<stdio.h>
#include<stdlib.h>
#include<validation.h>

void display_menu();
int mystrlen(char *str);
int mystrcmp(char *str1, char *str2);
char *mystrcpy(char *str1,char *str2);
char *mystrcat(char *str1,char *str2);
int mystrchr(char *str,char *ch);
int mystrcasecmp(char *str1, char *str2);
int mystrncat(char *str,char *str1,char *str2,int n);
int mystrncmp(char *str1, char *str2,int n);
int mystrncpy(char *str1,char *str2,int n);
int mystrncasecmp(char *str1, char *str2,int n);
int valid_string(char *str); 