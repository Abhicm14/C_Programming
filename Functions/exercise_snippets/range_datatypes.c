#include <stdio.h>
#include <limits.h> // For integer type limits
#include <float.h>  // For floating-point type limits

int main() 
{
    printf("--- Integer Data Types and their Ranges ---\n");
    printf("char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0 to %d\n", UCHAR_MAX);
    printf("short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int: 0 to %d\n", USHRT_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int: 0 to %lu\n", ULONG_MAX);
    printf("long long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int: 0 to %llu\n", ULLONG_MAX);

    printf("\n--- Floating-Point Data Types and their Ranges ---\n");
    printf("float: %E to %E\n", FLT_MIN, FLT_MAX);
    printf("double: %E to %E\n", DBL_MIN, DBL_MAX);
    printf("long double: %LE to %LE\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
