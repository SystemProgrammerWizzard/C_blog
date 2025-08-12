#include <stdio.h>

int main(void){
    // Similar to all other programming, C have it own set of variables
    // Type         Size (bytes)        Bits
    // bool         1                   8
    // char(ASCII)  1                   8
    // unsign char  1                   8
    // sign char    1                   8
    // short        2                   16
    // unsign short 2                   16
    // int          4                   32
    // unsign int   4                   32
    // float        4                   32
    // long         4(32-bit)/8(64-bit) 32/64
    // usign long   4/8                 32/64
    // long long    8                   64
    // double       8                   64
    // long double  8/12/16             64/96/128

    // This was it original, overtime with the enhances of computer power, some of them have change.
    int myint;
    float myfloat;
    short myshort;
    double mydouble;
    char mychar;
    long long mylonglong;
    long double mylongdouble;

    printf("Size of int: %zu bytes\n", sizeof(myint));
    printf("Size of float: %zu bytes\n", sizeof(myfloat));
    printf("Size of short: %zu bytes\n", sizeof(myshort));
    printf("Size of double: %zu bytes\n", sizeof(mydouble));
    printf("Size of char: %zu bytes\n", sizeof(mychar));
    printf("Size of long long: %zu bytes\n", sizeof(mylonglong));
    printf("Size of long double: %zu bytes\n", sizeof(mylongdouble));
    
    // You might as why we use %zu ? if it a number why can we use %d. This is true and you still able to use it.
    // But when C growth, it is safer and more portable to use %zu, which is specifically designed for printing size_t values.

    return 0;
}

// Compile with gcc main.c
// Execute with ./a.out