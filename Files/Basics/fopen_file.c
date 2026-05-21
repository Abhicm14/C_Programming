/*
    About file : 
    -> File handling in C is a powerful feature that allows you to read from and write to files on your computer. 
       It provides a way to store data persistently, which means that the data can be saved and accessed even after the program has finished executing.
    -> In C, you can perform various operations on files, such as opening a file, reading from a file, writing to a file, and closing a file.

    File handling in C is done using a set of functions provided by the standard library.
    The most commonly used functions for file handling in C include:
    1. fopen(): This function is used to open a file. It takes two arguments
         - the name of the file to be opened and the mode in which the file should be opened (e.g., "r" for reading, "w" for writing, "a" for appending).
    2. fclose(): This function is used to close a file that has been opened using fopen().
    
    modes for fopen():
    1) text mode: In text mode, the file is treated as a sequence of characters. When you read from or write to a file in text mode, the data is processed as text. 
       This means that certain characters, such as newline characters, may be translated to platform-specific representations (e.g., "\n" on Unix/Linux and "\r\n" on Windows). 
       When you open a file in text mode, you can use the following modes:
        - "r": Open a file for reading. The file must exist. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
        - "w": Open a file for writing. If the file already exists, it will be truncated to zero length. If the file does not exist, it will be created. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
        - "a": Open a file for appending. If the file already exists, the new data will be added to the end of the file. If the file does not exist, it will be created. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
        - "r+": Open a file for both reading and writing. The file must exist.returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
        - "w+": Open a file for both reading and writing. If the file already exists results in truncation to zero length. If the file does not exist, it will be created. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
        - "a+": Open a file for both reading and appending. If the file already exists, the new data will be added to the end of the file. If the file does not exist, it will be created. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
    
    2) binary mode: In binary mode, the file is treated as a sequence of bytes. When you read from or write to a file in binary mode, the data is processed as raw bytes without any translation. 
       This means that the data is read and written exactly as it is stored in the file,
        without any special handling for newline characters or other platform-specific representations. 
        When you open a file in binary mode, you can use the following modes:
          - "rb": Open a file for reading in binary mode. The file must exist.returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
          - "wb": Open a file for writing in binary mode. If the file already exists, it will be truncated to zero length. If the file does not exist, it will be created. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
          - "ab": Open a file for appending in binary mode. If the file already exists, the new data will be added to the end of the file. If the file does not exist, it will be created. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
          - "rb+": Open a file for both reading and writing in binary mode. The file must exist. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
          - "wb+": Open a file for both reading and writing in binary mode. If the file already exists, it will be truncated to zero length. If the file does not exist, it will be created. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
          - "ab+": Open a file for both reading and appending in binary mode. If the file already exists, the new data will be added to the end of the file. If the file does not exist, it will be created. returns a pointer to the file stream if the file is successfully opened, or NULL if the file cannot be opened.
*/

#include<stdio.h>

void main()
{
    FILE *file_pointer = NULL;

    file_pointer = fopen("some.txt","r");

    if( file_pointer == NULL)
    {
        printf("Error while opening the file\n");
    }
    else
    {
        printf("File Opened Successfully\n");
        fclose(file_pointer);
    }
}