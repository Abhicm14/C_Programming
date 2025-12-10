/******************************************************************************
* Project: Custom String Functions Implementation
* Author: Abhishek C M
* Date: 16/10/2025
* 
* Description:
* This project implements standard string manipulation functions from scratch
* without using any library functions. It includes implementations of:
* - strlen, strcmp, stpcpy, strcasecmp, strcat
* - strchr, strncat, strncmp, strncpy, strncasecmp
*
* The project follows strict coding guidelines:
* -> Each function is implemented in a separate file
* -> No direct I/O in function implementations
* -> All functions return values as per standard specifications
* -> Comprehensive input validation
* -> Proper directory structure (src, include, bin)
* -> Makefile for building the project
*
* Usage:
* The program presents a menu-driven interface where users can select
* which string operation to perform and see the results.
******************************************************************************/

#include"mystring.h"

void main()
{
    char str[50];
    char str1[50];
    char str2[50];
    char key;
    int position;
    int choice;
    int length;
    int result;

    while(1)
    {
        
        display_menu();

        printf("\nEnter the choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:
            {
                printf("\nExiting program. Goodbye!\n");
                exit(0);
            }
            case 1:
            {
                while(1)
                {
                    printf("Enter the string: ");
                    scanf("%s",str);

                    if(valid_string(str) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }
                
                printf("\nLength of string : %d\n",mystrlen(str));
                
                break;
            }
            case 2:
            {
                while(1)
                {
                    printf("Enter the first string to compare: ");
                    scanf("%s",str1);

                    if(valid_string(str1) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the second string to compare: ");
                    scanf("%s",str2);

                    if(valid_string(str2) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                } 
                
                if(mystrcmp(str1,str2) == 0)
                {
                    printf("\nStrings are same\n\n");
                }
                else
                {
                    printf("\nStrings are Not same\n\n");
                }
                
                break;
            }
            case 3:
            {
                while(1)
                {
                    printf("Enter the destination string (will be overwritten): ");
                    scanf("%s",str1);

                    if(valid_string(str1) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the source string (to be copied): ");
                    scanf("%s",str2);

                    if(valid_string(str2) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }
                
                mystrcpy(str1,str2);
                
                printf("\nStrings After Copied : ");
                printf("String1 : %s\t",str1);
                printf("String2 : %s\n",str2);
                
                break;
            }
            case 4:
            {

                while(1)
                {
                    printf("Enter the first string to compare (case-insensitive): ");
                    scanf("%s",str1);

                    if(valid_string(str1) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the second string to compare (case-insensitive): ");
                    scanf("%s",str2);

                    if(valid_string(str2) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                result = mystrcasecmp(str1,str2);
                
                if(result == 0)
                {
                    printf("\nStrings are same\n");
                }
                else
                {
                    printf("\nStrings are Not same\n");
                }
                
                break;
            }
            case 5:
            {
                while(1)
                {
                    printf("Enter the destination string (to be appended to): ");
                    scanf("%s",str1);

                    if(valid_string(str1) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the source string (to add to the end): ");
                    scanf("%s",str2);

                    if(valid_string(str2) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                mystrcat(str1,str2);
                
                printf("\nStrings After Concatenated : ");
                printf("String1 : %s\t",str1);
                printf("String2 : %s\n",str2);
                
                break;
            }
            case 6:
            {
                while(1)
                {
                    printf("Enter the string to search in: ");
                    scanf("%s",str1);

                    if(valid_string(str1) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the character to find: ");
                    key = valid_char();

                    if(key != '\0')
                    {
                        break;
                    }
                    else
                    {
                        continue;;
                    }
                }
                
                if(mystrchr(str1,&key) != -1)
                {
                    printf("\n %c is found at %d Index of string\n",key,mystrchr(str1,&key));
                }
                else
                {
                    printf("\n%c is Not found in the string\n",key);
                    
                }    
                
                break;
            }
            case 7:
            {
                while(1)
                {
                    printf("Enter the destination string (to be appended to): ");
                    scanf("%s",str1);

                    if(valid_string(str1) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the source string (to add from): ");
                    scanf("%s",str2);

                    if(valid_string(str2) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the number of characters to append: ");
                    position = valid_int();

                    if(position == -1)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                
                mystrncat(str,str1,str2,position);
                
                printf("\nStrings After Concatenated : ");
                printf("String1 : %s\t",str);
                printf("String2 : %s\n",str2);
                
                break;
            }
            case 8:
            {
                while(1)
                {
                    printf("Enter the first string to compare: ");
                    scanf("%s",str1);

                    if(valid_string(str1) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the second string to compare: ");
                    scanf("%s",str2);

                    if(valid_string(str2) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the number of characters to compare: ");
                    position = valid_int();

                    if(position == -1)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                
                result = mystrncmp(str1,str2,position);
                
                if(result == 0)
                {
                    printf("\nStrings are same\n");
                }
                else
                {
                    printf("\nStrings are Not same\n");
                }
                
                break;
            }
            case 9:
            {

                while(1)
                {
                    printf("Enter the destination string (will be overwritten): ");
                    scanf("%s",str1);

                    if(valid_string(str1) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the source string (to be copied from): ");
                    scanf("%s",str2);

                    if(valid_string(str2) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the number of characters to copy: ");
                    position = valid_int();

                    if(position == -1)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                
                mystrncpy(str1,str2,position);
                
                printf("\nStrings After Copied : ");
                printf("String1 : %s\t",str1);
                printf("String2 : %s\n",str2);
                
                break;
            }
            case 10:
            {
                while(1)
                {
                    printf("Enter the first string to compare (case-insensitive): ");
                    scanf("%s",str1);

                    if(valid_string(str1) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the second string to compare (case-insensitive): ");
                    scanf("%s",str2);

                    if(valid_string(str2) != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid String\n");
                        continue;
                    }
                }

                while(1)
                {
                    printf("Enter the number of characters to compare: ");
                    position = valid_int();

                    if(position == -1)
                    {
                        printf("Invalid Input\n");
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }

                
                result = mystrncasecmp(str1,str2,position);
                
                if(result == 0)
                {
                    printf("\nStrings are same\n");
                }
                else
                {
                    printf("\nStrings are Not same\n");
                }
                
                break;
            }
            default:
            {
                printf("\nInvalid choice! Please enter a number between 0 and 10.\n");;
            }
        }
    }
}
