/*
    synatx :
        fwrite(address, size_of_each_item, number_of_items, file_pointer);
        fread(address, size_of_each_item, number_of_items, file_pointer);
*/

#include<stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("myfile.bin","wb+");

    if(fp == NULL)
    {
        perror("Error while Opening file");
        return 1;
    }
    
    int x = 65;

    //Write an integer to a binary file using fwrite().
    int written = fwrite(&x,sizeof(int),1,fp);

    if(written != 1)
    {
        printf("Writing failed.\n");
    }
    
    //Read the integer back using fread().
    int y;

    rewind(fp);

    int read = fread(&y,sizeof(int),1,fp);

    if(read != 1)
    {
        printf("Reading failed.\n");
        fclose(fp);
        return 1;
    }

    printf("Value : %d\n",y);
    
    //Store an array of 10 integers in a binary file.
    int arr1[5] = {66,67,68,69,70};
    int arr2[6];

    fwrite(arr1,sizeof(int),5,fp);

    rewind(fp);
    
    //Read the array and display it.
    fread(arr2,sizeof(int),6,fp);

    printf("Array read from file: \n");
    for(int count = 0; count < 6; count++)
    {
        printf("%d ",arr2[count]);
    }

    fclose(fp);
    return 0;
}