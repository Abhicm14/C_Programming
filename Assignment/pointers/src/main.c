#include<pointers.h>

void main()
{
    
    while(1)
    {
        printf("\n");
        menu();
        
        printf("Enter your Choice : ");
        choice = valid_int();
    
        if(choice == -1)
        {
            continue;
        }
        else
        {

            switch(choice)
            {
                case 0:
                {
                    printf("Exiting program. Goodbye!\n\n");
                    exit(0);
                    break;
                }
                case 1:
                {
                    while(1)
                    {
                        printf("\nEnter current stock :");
                        stockQuantity = valid_int();
                        if(stockQuantity == -1)
                        {
                            continue;
                        }
                        else
                        {
                            while(1)
                            {
                                printf("Enter the change in stock (+ for add, - for remove) : ");
                                change  = valid_int();

                                if(change == -1)
                                {
                                    continue;
                                }
                                else
                                {
                                    updateStock(&stockQuantity,change);
                                    printf("\nUpdated stock Quantity is : %d\n",*stockptr);
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    printf("\nCurrent balance : $%.2f\n",balance);
                    while(1)
                    {
                        printf("Enter transaction amount (e.g., 200 for deposit, -50 for withdrawal) : ");
                        amount = valid_float();

                        if(amount == -1.0f)
                        {
                            continue;
                        }
                        else
                        {
                            processTransaction(&balance,amount);
                            printf("\nNew Balance : $%.2f\n",*balanceptr);
                            break;
                        }
                    }
                    break;
                }
                case 3:
                {
                    while(1)
                    {
                        printf("\nHow many products do you want to enter ? :");
                        numProducts = valid_int();

                        if(numProducts == -1)
                        {
                            continue;
                        }
                        else
                        {
                            priceList = (float *)malloc(numProducts * sizeof(float));

                            if(priceList == NULL)
                            {
                                printf("Memory not available\n");
                                exit(1);
                            }
                            else
                            {
                                printf("\n");
                                for(int count=0; count < numProducts; count++)
                                {   
                                    while(1)
                                    {
                                        printf("Enter price for product %d : ",count);
                                        priceList[count] = valid_float();
                                        if(priceList[count] == -1.0f)
                                        {
                                            continue;
                                        }
                                        else
                                        {
                                            break;
                                        }
                                    }
                                }
                                printf("Calculating......\n");
                                
                                calculatingPrices(priceList,numProducts);
                            }
                            free(priceList);
                            break;
                        }
                    }
                    break;
                }
                case 4:
                {
                    while(1)
                    {
                        printf("\nEnter the number of elements : ");
                        size = valid_int();
                        if(size == -1)
                        {
                            continue;
                        }
                        else
                        {
                            int arr[size];
                            printf("\n");

                            for(int count = 0; count < size; count++)
                            {
                                while(1)
                                {
                                    printf("Enter element %d :",count);
                                    arr[count] = valid_int();
                                    if(arr[count] == -1)
                                    {
                                        continue;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            
                            printf("\nOriginal array : ");
                            for(int count = 0; count < size; count++)
                            {
                                printf(" %d\t ",arr[count]);
                            }
                            printf("\n");

                            reverseArray(arr,size);

                            printf("\nReversed array : ");
                            for(int count = 0; count < size; count++)
                            {
                                printf(" %d\t ",arr[count]);
                            }
                            printf("\n");
                            break;
                        }
                    }
                    break;
                }
                case 5:
                {
                    while(1) 
                    {   
                        printf("\nEnter the number of elements : ");
                        size = valid_int();
                        if(size == -1)
                        {
                            continue;
                        }
                        else
                        {

                            int arr[size];

                            printf("Enter elements : ");
                            for(int count = 0; count < size; count++)
                            {
                                while(1)
                                {
                                    arr[count] = valid_int();
                                    if(arr[count] == -1)
                                    {
                                        continue;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            
                            while(1)
                            {
                                printf("Enter the integer to count : ");
                                target = valid_int();
                                if(target == -1)
                                {
                                    continue;
                                }
                                else
                                {
                                    break;
                                }
                            }

                            count = countOccurences(arr,size,target);

                            printf("\nThe number %d appears %d times in the array.\n",target,count);
                            break;
                            
                        }
                    }
                    break;
                }
                case 6:
                {
                    while (1)
                    {
                        printf("\nEnter value for integer Num1 : ");
                        num1 = valid_int();
                        if(num1 == -1)
                        {
                            continue;
                        }
                        else
                        {
                            while(1)
                            {
                                printf("Enter value for integer Num2 : ");
                                num2 = valid_int();
                                if(num2 == -1)
                                {
                                    continue;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            break;
                        }
                        
                    }
                    printf("\nBefore swap : Num1 = %d, Num2 = %d\n",num1,num2);

                    swap(&num1,&num2);

                    printf("After swap : Num1 = %d, Num2 = %d\n",num1,num2);

                    break;
                }
                case 7:
                {
                    calculator();
                    break;
                }
                case 8:
                {
                    while(1)
                    {   
                        printf("\nEnter the number of elements : ");
                        size = valid_int();
                        if(size == -1)
                        {
                            continue;
                        }
                        else
                        {
                            int arr[size];

                            for(int count = 0; count < size; count++)
                            {
                                while(1)
                                {
                                    printf("Enter element %d :",count);
                                    arr[count] = valid_int();
                                    if(arr[count] == -1)
                                    {
                                        continue;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }

                            largest = findLargest(arr,size);

                            printf("Largest Number In array : %d\n",largest);
                            break;
                        }
                       
                    }
                    break;
                }
                case 9:
                {
                    while(1)
                    {   
                        printf("\nEnter the number of elements : ");
                        size = valid_int();
                        if(size == -1)
                        {
                            continue;
                        }
                        else
                        {
                            int arr[size];

                            for(int count = 0; count < size; count++)
                            {
                                while(1)
                                {
                                    printf("Enter element %d :",count);
                                    arr[count] = valid_int();
                                    if(arr[count] == -1)
                                    {
                                        continue;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }

                            sum = sumArray(arr,size);

                            printf("Sum of array Elements : %d\n",sum);
                            break;
                        }
                        
                    }
                    break;
                }
                default:
                {
                    printf("\nInvalid choice. Please try again.\n");
                }
            }
        }
    }
}
