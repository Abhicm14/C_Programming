# C File Handling Notes for

File handling means **storing data permanently** in files using a C program.  
Variables store data only while the program is running, but files keep data even after the program ends.

Example uses:

- Student record storage
- Marks management system
- Login/signup system
- Saving game scores
- Storing sensor readings
- Reading configuration files

---

# 1. Header File Required

All basic file handling functions are available in:

```c
#include <stdio.h>
```

Some examples may also need:

```c
#include <string.h>
#include <stdlib.h>
```

---

# 2. Basic Idea of File Handling

In C, a file is handled using a **file pointer**.

```c
FILE *fp;
```

`FILE` is a structure defined in `stdio.h`.

The file pointer stores information such as:

- Current file position
- End-of-file status
- Error status
- File mode

---

# 3. Types of Files

## 3.1 Text Files

Text files store data in human-readable form.

Example:

```txt
Ravi 101 89.5
Anita 102 92.0
```

You can open text files using Notepad, VS Code, etc.

Common functions used:

```c
fprintf()
fscanf()
fgets()
fputs()
fgetc()
fputc()
```

---

## 3.2 Binary Files

Binary files store data in machine-readable format.

Example:

```txt
01010101 11001100 ...
```

They are not easily readable by humans.

Common functions used:

```c
fwrite()
fread()
```

Binary files are useful for:

- Structures
- Arrays
- Images
- Audio
- Large data storage
- Faster reading/writing

---

# 4. Opening a File: `fopen()`

## Syntax

```c
FILE *fp;
fp = fopen("filename", "mode");
```

Example:

```c
FILE *fp;
fp = fopen("data.txt", "w");
```

---

## File Opening Modes

| Mode   | Meaning         | If file exists            | If file does not exist |
| ------ | --------------- | ------------------------- | ---------------------- |
| `"r"`  | Read only       | Opens file                | Returns `NULL`         |
| `"w"`  | Write only      | Deletes old content       | Creates new file       |
| `"a"`  | Append only     | Adds data at end          | Creates new file       |
| `"r+"` | Read and write  | Opens file                | Returns `NULL`         |
| `"w+"` | Read and write  | Deletes old content       | Creates new file       |
| `"a+"` | Read and append | Opens file, writes at end | Creates new file       |

For binary files, add `b`.

| Text Mode | Binary Mode        |
| --------- | ------------------ |
| `"r"`     | `"rb"`             |
| `"w"`     | `"wb"`             |
| `"a"`     | `"ab"`             |
| `"r+"`    | `"rb+"` or `"r+b"` |
| `"w+"`    | `"wb+"` or `"w+b"` |
| `"a+"`    | `"ab+"` or `"a+b"` |

---

# 5. Always Check Whether File Opened Successfully

If `fopen()` fails, it returns `NULL`.

## Example

```c
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("File opened successfully.\n");

    fclose(fp);

    return 0;
}
```

---

# 6. Closing a File: `fclose()`

After using a file, always close it.

## Syntax

```c
fclose(fp);
```

Why close a file?

- Saves pending data properly
- Frees memory/resources
- Prevents file corruption
- Allows deleting or renaming the file safely

Example:

```c
fclose(fp);
```

---

# 7. General File Handling Template

Use this pattern in most programs.

```c
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // File operations here

    fclose(fp);

    return 0;
}
```

`perror()` gives a useful error message.

Example output:

```txt
Error opening file: No such file or directory
```

---

# 8. Writing One Character: `fputc()`

`fputc()` writes a single character to a file.

## Syntax

```c
fputc(character, file_pointer);
```

## Example

```c
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);

    fclose(fp);

    return 0;
}
```

Output in `output.txt`:

```txt
ABC
```

---

## Return Value of `fputc()`

On success, it returns the character written.  
On failure, it returns `EOF`.

```c
int result = fputc('A', fp);

if (result == EOF) {
    printf("Character writing failed.\n");
}
```

---

# 9. Reading One Character: `fgetc()`

`fgetc()` reads one character from a file.

## Syntax

```c
int ch;
ch = fgetc(file_pointer);
```

Important: Use `int`, not `char`.

Why?

Because `fgetc()` returns either:

- ASCII value of character
- `EOF`, usually `-1`

---

## Example: Read Complete File Character by Character

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int ch;

    fp = fopen("output.txt", "r");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
```

If `output.txt` contains:

```txt
ABC
```

Output:

```txt
ABC
```

---

# 10. EOF, `feof()`, `ferror()`, and `clearerr()`

C file streams maintain two important flags:

1. EOF flag
2. Error flag

---

## 10.1 `feof()`

Used to check whether end of file is reached.

## Syntax

```c
feof(fp);
```

It returns non-zero if EOF is reached.

Important point:

Do not use this style:

```c
while (!feof(fp)) {
    ch = fgetc(fp);
    printf("%c", ch);
}
```

This can print wrong output because EOF is detected only after a failed read.

Use this correct style:

```c
while ((ch = fgetc(fp)) != EOF) {
    putchar(ch);
}
```

---

## 10.2 `ferror()`

Used to check if an error occurred during file operations.

## Syntax

```c
ferror(fp);
```

Example:

```c
if (ferror(fp)) {
    printf("A file error occurred.\n");
}
```

---

## 10.3 `clearerr()`

Used to clear both EOF and error flags.

## Syntax

```c
clearerr(fp);
```

Example:

```c
clearerr(fp);
```

This is useful if you want to continue using the same file stream after handling an error.

---

## Example Using `feof()` and `ferror()`

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    if (feof(fp)) {
        printf("\nEnd of file reached.\n");
    }

    if (ferror(fp)) {
        printf("\nError occurred while reading.\n");
    }

    fclose(fp);

    return 0;
}
```

---

# 11. Writing Formatted Data: `fprintf()`

`fprintf()` is like `printf()`, but it writes to a file.

## Syntax

```c
fprintf(file_pointer, "format string", variables);
```

## Example

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int roll = 101;
    float marks = 89.5;
    char name[] = "Ravi";

    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Roll: %d\n", roll);
    fprintf(fp, "Marks: %.2f\n", marks);

    fclose(fp);

    return 0;
}
```

Output in `student.txt`:

```txt
Name: Ravi
Roll: 101
Marks: 89.50
```

---

## Return Value of `fprintf()`

It returns number of characters written.

If an error occurs, it returns a negative value.

```c
int result = fprintf(fp, "Hello");

if (result < 0) {
    printf("Writing failed.\n");
}
```

---

# 12. Reading Formatted Data: `fscanf()`

`fscanf()` is like `scanf()`, but it reads from a file.

## Syntax

```c
fscanf(file_pointer, "format string", addresses);
```

## Example

Suppose `student.txt` contains:

```txt
101 Ravi 89.5
```

Program:

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    float marks;
    char name[50];

    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    fscanf(fp, "%d %49s %f", &roll, name, &marks);

    printf("Roll: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Marks: %.2f\n", marks);

    fclose(fp);

    return 0;
}
```

Output:

```txt
Roll: 101
Name: Ravi
Marks: 89.50
```

---

## Return Value of `fscanf()`

`fscanf()` returns number of values successfully read.

Example:

```c
int result = fscanf(fp, "%d %49s %f", &roll, name, &marks);

if (result != 3) {
    printf("File data format is incorrect.\n");
}
```

This helps detect errors in file format.

---

## Reading Strings with Spaces Using `fscanf()`

Normally `%s` stops at space.

If file contains:

```txt
Ravi Kumar
```

Use scanset:

```c
fscanf(fp, "%49[^\n]", name);
```

This reads until newline.

---

# 13. Writing Strings: `fputs()`

`fputs()` writes a string to a file.

## Syntax

```c
fputs(string, file_pointer);
```

## Example

```c
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("message.txt", "w");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    fputs("Hello students!\n", fp);
    fputs("Welcome to C file handling.\n", fp);

    fclose(fp);

    return 0;
}
```

Output in `message.txt`:

```txt
Hello students!
Welcome to C file handling.
```

Important:

`fputs()` does not automatically add newline.  
You must write `\n` yourself.

---

## Return Value of `fputs()`

On success, returns non-negative value.  
On failure, returns `EOF`.

```c
if (fputs("Hello\n", fp) == EOF) {
    printf("String writing failed.\n");
}
```

---

# 14. Reading a Line: `fgets()`

`fgets()` reads a line safely from a file.

## Syntax

```c
fgets(buffer, size, file_pointer);
```

Example:

```c
char line[100];
fgets(line, 100, fp);
```

It reads at most `size - 1` characters and adds `'\0'` at the end.

This prevents buffer overflow.

---

## Example

```c
#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("message.txt", "r");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
```

---

## Removing Newline from `fgets()`

`fgets()` keeps newline `\n` if there is space.

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Hello %s\n", name);

    return 0;
}
```

---

# 15. `fgets()` vs `fscanf()`

| Function   | Best For                                   |
| ---------- | ------------------------------------------ |
| `fscanf()` | Reading formatted data like numbers, words |
| `fgets()`  | Reading full lines safely                  |
| `sscanf()` | Extracting formatted data from a string    |

Safer approach:

```c
fgets(line, sizeof(line), fp);
sscanf(line, "%d %49s %f", &roll, name, &marks);
```

This is safer for project work.

---

# 16. Rewinding a File: `rewind()`

When you read a file completely, the file position reaches the end.

To read again from the beginning, use:

```c
rewind(fp);
```

`rewind()` does two things:

1. Moves file position to beginning
2. Clears EOF and error flags

---

## Example

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    printf("First reading:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    rewind(fp);

    printf("\nSecond reading:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
```

---

# 17. Text Mode vs Binary Mode

## Text Mode

Example:

```c
fopen("data.txt", "w");
```

Text mode may perform newline conversion on some systems.

For example, on Windows:

```txt
\n
```

may be stored internally as:

```txt
\r\n
```

---

## Binary Mode

Example:

```c
fopen("data.bin", "wb");
```

Binary mode stores data exactly as it is in memory.

No newline conversion is done.

Use binary mode for:

- Structures
- Arrays
- Images
- Audio
- Raw data

---

# 18. Writing Binary Data: `fwrite()`

`fwrite()` writes data block-by-block to a binary file.

## Syntax

```c
fwrite(address, size_of_each_item, number_of_items, file_pointer);
```

---

## Example: Write Integer to Binary File

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int x = 65;

    fp = fopen("number.bin", "wb");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    size_t written = fwrite(&x, sizeof(int), 1, fp);

    if (written != 1) {
        printf("Writing failed.\n");
    }

    fclose(fp);

    return 0;
}
```

---

# 19. Reading Binary Data: `fread()`

`fread()` reads binary data from a file into memory.

## Syntax

```c
fread(address, size_of_each_item, number_of_items, file_pointer);
```

---

## Example: Read Integer from Binary File

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int y;

    fp = fopen("number.bin", "rb");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    size_t read = fread(&y, sizeof(int), 1, fp);

    if (read != 1) {
        printf("Reading failed.\n");
        fclose(fp);
        return 1;
    }

    printf("Value read: %d\n", y);

    fclose(fp);

    return 0;
}
```

Output:

```txt
Value read: 65
```

---

# 20. Binary vs Text Example

## Text Writing

```c
fprintf(fp, "%d", 65);
```

Stores:

```txt
65
```

Two characters:

```txt
'6' and '5'
```

Human-readable.

---

## Binary Writing

```c
fwrite(&x, sizeof(int), 1, fp);
```

Stores raw bytes of integer `65`.

May look unreadable in text editor.

---

## When to Use What?

| Requirement         | Use                                |
| ------------------- | ---------------------------------- |
| Human-readable file | `fprintf()`, `fscanf()`, `fgets()` |
| Fast storage        | `fwrite()`, `fread()`              |
| Store structures    | Binary file                        |
| Store logs          | Text file                          |
| Easy debugging      | Text file                          |
| Compact file size   | Binary file                        |

---

# 21. Writing and Reading Arrays Using Binary Files

## Example

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int arr[5] = {10, 20, 30, 40, 50};
    int brr[5];

    fp = fopen("array.bin", "wb");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    fwrite(arr, sizeof(int), 5, fp);

    fclose(fp);

    fp = fopen("array.bin", "rb");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    fread(brr, sizeof(int), 5, fp);

    fclose(fp);

    printf("Array read from file:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", brr[i]);
    }

    return 0;
}
```

Output:

```txt
Array read from file:
10 20 30 40 50
```

---

## Important Array Warning

Inside the same function:

```c
sizeof(arr)
```

gives total array size.

But if array is passed to a function:

```c
void display(int arr[]) {
    printf("%zu", sizeof(arr));
}
```

Here `arr` becomes a pointer. So `sizeof(arr)` gives pointer size, not full array size.

So always pass array size separately:

```c
void saveArray(int arr[], int n) {
    fwrite(arr, sizeof(int), n, fp);
}
```

---

# 22. Writing and Reading Structures Using Binary Files

Structures are very commonly used with binary files.

## Example

```c
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s1 = {101, "Ravi", 89.5};
    struct Student s2;

    fp = fopen("student.bin", "wb");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    fwrite(&s1, sizeof(struct Student), 1, fp);

    fclose(fp);

    fp = fopen("student.bin", "rb");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    fread(&s2, sizeof(struct Student), 1, fp);

    fclose(fp);

    printf("Roll: %d\n", s2.roll);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}
```

Output:

```txt
Roll: 101
Name: Ravi
Marks: 89.50
```

---

## Important Structure Warnings

### 1. Avoid pointers inside structures for file storage

Bad idea:

```c
struct Student {
    int roll;
    char *name;
};
```

If you save this using `fwrite()`, only the memory address is saved, not the actual name.

Better:

```c
struct Student {
    int roll;
    char name[50];
};
```

---

### 2. Structure padding may differ

Different compilers or systems may add different padding bytes inside structures.

So binary files containing structures may not be portable across different systems.

For beginner projects on the same system, it is usually fine.

---

# 23. Finding Current File Position: `ftell()`

`ftell()` tells current file position.

## Syntax

```c
long pos;
pos = ftell(fp);
```

It returns number of bytes from beginning.

---

## Example

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int x = 100;
    long pos;

    fp = fopen("data.bin", "wb");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    pos = ftell(fp);
    printf("Position before writing: %ld\n", pos);

    fwrite(&x, sizeof(int), 1, fp);

    pos = ftell(fp);
    printf("Position after writing: %ld\n", pos);

    fclose(fp);

    return 0;
}
```

Possible output:

```txt
Position before writing: 0
Position after writing: 4
```

If `int` size is 4 bytes.

---

# 24. Moving File Position: `fseek()`

`fseek()` moves file position indicator.

## Syntax

```c
fseek(file_pointer, offset, origin);
```

Origins:

| Origin     | Meaning               |
| ---------- | --------------------- |
| `SEEK_SET` | From beginning        |
| `SEEK_CUR` | From current position |
| `SEEK_END` | From end              |

Return value:

- `0` means success
- Non-zero means failure

---

## Example: Read Third Integer from File

```c
#include <stdio.h>

int main() {
    FILE *fp;
    int arr[5] = {10, 20, 30, 40, 50};
    int value;

    fp = fopen("nums.bin", "wb");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    fwrite(arr, sizeof(int), 5, fp);
    fclose(fp);

    fp = fopen("nums.bin", "rb");

    if (fp == NULL) {
        perror("File error");
        return 1;
    }

    // Move to third integer.
    // Index starts from 0, so third integer index is 2.
    fseek(fp, 2 * sizeof(int), SEEK_SET);

    fread(&value, sizeof(int), 1, fp);

    printf("Third value = %d\n", value);

    fclose(fp);

    return 0;
}
```

Output:

```txt
Third value = 30
```

---

## `rewind()` vs `fseek()`

These two are similar:

```c
rewind(fp);
```

and

```c
fseek(fp, 0, SEEK_SET);
```

But `rewind()` also clears EOF and error flags.

---

# 25. Temporary Files: `tmpfile()`

`tmpfile()` creates a temporary file.

## Syntax

```c
FILE *fp;
fp = tmpfile();
```

Features:

- Automatically opened in binary update mode
- Can read and write
- Automatically deleted after closing or program ending
- No need to give file name

---

## Example

```c
#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = tmpfile();

    if (fp == NULL) {
        perror("Temporary file error");
        return 1;
    }

    fprintf(fp, "Temporary data\n");

    rewind(fp);

    fgets(line, sizeof(line), fp);

    printf("Read: %s", line);

    fclose(fp);

    return 0;
}
```

Output:

```txt
Read: Temporary data
```

---

# 26. Renaming or Moving Files: `rename()`

`rename()` is used to rename files or folders.

## Syntax

```c
rename("oldname", "newname");
```

Return value:

- `0` means success
- Non-zero means failure

---

## Example

```c
#include <stdio.h>

int main() {
    int result;

    result = rename("old.txt", "new.txt");

    if (result == 0) {
        printf("File renamed successfully.\n");
    } else {
        perror("Rename failed");
    }

    return 0;
}
```

---

## Windows Path Warning

In C strings, use double backslashes:

```c
"C:\\Users\\Student\\Desktop\\file.txt"
```

Do not write:

```c
"C:\Users\Student\Desktop\file.txt"
```

Because `\U`, `\S`, etc. may be treated incorrectly.

---

# 27. Deleting Files: `remove()`

`remove()` deletes a file.

## Syntax

```c
remove("filename");
```

Return value:

- `0` means success
- Non-zero means failure

---

## Example

```c
#include <stdio.h>

int main() {
    int result;

    result = remove("delete_me.txt");

    if (result == 0) {
        printf("File deleted successfully.\n");
    } else {
        perror("Delete failed");
    }

    return 0;
}
```

Important:

- Always close the file before deleting.
- `remove()` is for files, not folders.

---

# 28. Common File Handling Errors and Solutions

## Error 1: File not opening

### Possible reasons:

- Wrong file name
- Wrong path
- File does not exist in `"r"` mode
- Permission problem

### Solution:

```c
fp = fopen("data.txt", "r");

if (fp == NULL) {
    perror("Opening failed");
    return 1;
}
```

---

## Error 2: Existing file content deleted

Reason:

You used `"w"` mode.

```c
fopen("data.txt", "w");
```

This deletes old content.

Use append mode if you want to add data:

```c
fopen("data.txt", "a");
```

---

## Error 3: Extra or missing output while reading file

Wrong style:

```c
while (!feof(fp)) {
    ch = fgetc(fp);
    printf("%c", ch);
}
```

Correct style:

```c
while ((ch = fgetc(fp)) != EOF) {
    putchar(ch);
}
```

---

## Error 4: Garbage data after `fread()`

Possible reasons:

- File was not written properly
- Wrong structure size
- Wrong data type
- Forgot to check return value

Correct checking:

```c
if (fread(&s, sizeof(s), 1, fp) != 1) {
    printf("Reading failed.\n");
}
```

---

## Error 5: Program crashes while reading strings

Possible reason:

Buffer overflow.

Bad:

```c
fscanf(fp, "%s", name);
```

Better:

```c
fscanf(fp, "%49s", name);
```

If `name` size is 50, use `%49s` to leave space for `'\0'`.

---

## Error 6: File not deleted

Possible reasons:

- File is still open
- No permission
- Wrong path
- File does not exist

Solution:

```c
fclose(fp);
remove("file.txt");
```

Use:

```c
perror("Delete failed");
```

---

## Error 7: Reading gives no output second time

Reason:

File pointer is already at end.

Solution:

```c
rewind(fp);
```

---

## Error 8: Binary file looks unreadable

This is normal.

Binary files are not meant to be read directly in Notepad.

Use `fread()` to read them.

---

# 29. Important Function Summary Table

| Function     | Purpose                          |
| ------------ | -------------------------------- |
| `fopen()`    | Opens a file                     |
| `fclose()`   | Closes a file                    |
| `fputc()`    | Writes one character             |
| `fgetc()`    | Reads one character              |
| `fputs()`    | Writes string                    |
| `fgets()`    | Reads line/string                |
| `fprintf()`  | Writes formatted text            |
| `fscanf()`   | Reads formatted text             |
| `fwrite()`   | Writes binary data               |
| `fread()`    | Reads binary data                |
| `feof()`     | Checks EOF flag                  |
| `ferror()`   | Checks error flag                |
| `clearerr()` | Clears EOF/error flags           |
| `rewind()`   | Moves file position to beginning |
| `ftell()`    | Gives current file position      |
| `fseek()`    | Moves file position              |
| `tmpfile()`  | Creates temporary file           |
| `rename()`   | Renames/moves file               |
| `remove()`   | Deletes file                     |

---

# 30. Best Practices for Projects

Always follow these rules:

1. Always check if `fopen()` returned `NULL`.
2. Always close files using `fclose()`.
3. Use `perror()` when file operations fail.
4. Use `"a"` mode when you do not want to delete old data.
5. Use `"w"` mode only when overwriting is okay.
6. Use binary mode for structures and arrays.
7. Use text mode for logs and reports.
8. Use `fgets()` instead of unsafe input methods.
9. Check return values of `fread()` and `fwrite()`.
10. Avoid pointers inside structures saved to binary files.
11. Use `rewind()` before reading again from the start.
12. Use width limits in `fscanf()` for strings.

---

# 31. Practice Questions Topic-Wise

## A. Basic File Opening and Closing

1. Write a program to create a file named `hello.txt`.
2. Open a file in read mode and display an error if it does not exist.
3. Create a file and write your name into it.
4. Open a file in append mode and add your college name.

---

## B. `fputc()` and `fgetc()`

1. Write characters `A` to `Z` into a file.
2. Read and display all characters from a file.
3. Count the number of characters in a file.
4. Count vowels in a text file.

---

## C. `fputs()` and `fgets()`

1. Write five lines into a file using `fputs()`.
2. Read a file line by line using `fgets()`.
3. Count the number of lines in a file.
4. Remove newline from a string read using `fgets()`.

---

## D. `fprintf()` and `fscanf()`

1. Store student roll number, name, and marks in a text file.
2. Read student details from a text file and display them.
3. Store details of 5 students using `fprintf()`.
4. Read marks from a file and calculate average.

---

## E. EOF and Error Handling

1. Demonstrate correct use of `EOF` with `fgetc()`.
2. Use `perror()` when file opening fails.
3. Try to read from a file opened in write mode and check `ferror()`.
4. Use `clearerr()` after an EOF condition.

---

## F. Binary Files

1. Write an integer to a binary file using `fwrite()`.
2. Read the integer back using `fread()`.
3. Store an array of 10 integers in a binary file.
4. Read the array and display it.

---

## G. Structures and Binary Files

1. Store one student structure in a binary file.
2. Read and display that student structure.
3. Store 5 student records in a binary file.
4. Search for a student by roll number.

---

## H. `fseek()`, `ftell()`, and `rewind()`

1. Use `ftell()` to display file position before and after writing.
2. Use `rewind()` to read a file twice.
3. Use `fseek()` to read the third integer from a binary file.
4. Use `fseek()` to update a specific student record.

---

## I. File Management

1. Rename a file using `rename()`.
2. Delete a file using `remove()`.
3. Try deleting a file that does not exist and use `perror()`.
4. Move a file from one folder to another using `rename()`.

---

# 32. Mini Projects for Practice

## Project 1: Student Marks Management System

Features:

- Add student record
- Display all records
- Search by roll number
- Calculate class average
- Store data in file

Recommended functions:

```c
fprintf()
fscanf()
fgets()
fputs()
```

---

## Project 2: Student Database Using Binary File

Features:

- Add student
- Display all students
- Search student by roll number
- Update marks
- Delete record logically

Recommended functions:

```c
fwrite()
fread()
fseek()
ftell()
```

---

## Project 3: Login and Registration System

Features:

- Register username and password
- Save details in file
- Login by checking stored data
- Display login success/failure

Recommended functions:

```c
fprintf()
fscanf()
strcmp()
```

---

## Project 4: Simple Diary Application

Features:

- Add diary entry
- View all entries
- Search entry by date
- Append new entries without deleting old data

Recommended functions:

```c
fopen("diary.txt", "a")
fgets()
fputs()
fprintf()
```

---

## Project 5: File Copy Program

Features:

- Read source file
- Copy content to destination file
- Count number of characters copied

Recommended functions:

```c
fgetc()
fputc()
```

---

## Project 6: Word and Line Counter

Features:

- Count characters
- Count words
- Count lines
- Display file statistics

Recommended functions:

```c
fgetc()
fgets()
```

---

## Project 7: Employee Payroll System

Features:

- Store employee ID, name, salary
- Calculate bonus
- Save payroll report
- Read old employee records

Recommended functions:

```c
fprintf()
fscanf()
fwrite()
fread()
```

---

## Project 8: Bank Account Record System

Features:

- Create account
- Deposit amount
- Withdraw amount
- Search account
- Update account balance

Recommended functions:

```c
fwrite()
fread()
fseek()
```

---

# 33. Final Beginner-Friendly Checklist

Before running any file handling program, ask yourself:

```txt
1. Did I include stdio.h?
2. Did I declare FILE *fp?
3. Did I open the file using fopen()?
4. Did I check if fp == NULL?
5. Did I choose the correct mode?
6. Did I use the correct function for text or binary?
7. Did I check return values where needed?
8. Did I close the file using fclose()?
9. Did I use perror() for debugging?
10. Did I avoid unsafe string reading?
```

If you follow this checklist, most file handling errors become easy to solve.
