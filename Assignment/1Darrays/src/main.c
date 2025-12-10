/*
 * =====================================================================================
 *       Project Name : ArrayManipulator
 *       Filename:  main.c
 *
 *    Description:  This is a menu-driven program that serves as a user interface
 *                  for performing various operations on an integer array. It allows
 *                  the user to create an array and then choose from a list of
 *                  manipulation functions to apply to it.
 *
 *         Author:  Abhishek C M
 *         Date  :  20/10/2025
 * =====================================================================================
*/


#include"array.h"

void main()
{
    int choice;
    int size;
    int size1;
    int sum;
    int position;

    printf("Enter the size of array :");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array Elements :\n");
    input_array(arr,size);

    while(1)
    {
        printf("\n");
        menu();

        printf("\nEnter the choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                even_odd_array(arr,size);
                break;
            }
            case 2:
            {
                printf("Enter the size of 2nd array : ");
                scanf("%d",&size1);

                int arr1[size1];

                printf("Enter the 2nd array elements :\n ");
                input_array(arr1,size1);

                printf("Enter the position of array  : ");
                scanf("%d",&position);

                concatenate_array(arr,size,arr1,size1,position);
                size = size+size1;
                break;
            }
            case 3:
            {
                distinct_array(arr,size);
                break;
            }
            case 4:
            {
                split_array(arr,size);
                break;
            }
            case 5:
            {
                remove_duplicate(arr,size);
                break;
            }
            default:
            {
                printf("Invalid choice\n");
            }
        }
        
        printf("\n");
    }
}