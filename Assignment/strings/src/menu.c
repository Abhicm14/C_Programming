#include"mystring.h"

// This function can be called repeatedly inside your main program loop.
void display_menu() {
    printf("\n===================================================================\n");
    printf("                  *** String Operations Menu ***\n");
    printf("-------------------------------------------------------------------\n");
    printf(" [ 1] strlen      - Find the length of a string.\n");
    printf(" [ 2] strcmp      - Compare two strings (case-sensitive).\n");
    printf(" [ 3] strcpy      - Copy string B into string A.\n");
    printf(" [ 4] strcasecmp  - Compare two strings (ignore case).\n");
    printf(" [ 5] strcat      - Append string B onto string A.\n");
    printf(" [ 6] strchr      - Find a character's index in a string.\n");
    printf(" [ 7] strncat     - Append 'n' characters from string B to A.\n");
    printf(" [ 8] strncmp     - Compare first 'n' characters (case-sensitive).\n");
    printf(" [ 9] strncpy     - Copy first 'n' characters from string B to A.\n");
    printf(" [10] strncasecmp - Compare first 'n' characters (ignore case).\n");
    printf(" [ 0] Exit        - Terminate the program.\n");
    printf("===================================================================\n");
    
}