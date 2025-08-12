#include <stdio.h>

int main(void) {
    // A variable is a holder for an actual value.
    // It can be defined or not yet defined, and its value may change during the program.

    char is_true = 't';   // 't' to represent true
    char is_false = 'f';  // 'f' to represent false

    printf("True variable: %c\n", is_true);
    printf("False variable: %c\n", is_false);

    // You can use it to store all the types that C have.

    return 0;
}

// Compile with gcc main.c
// Execute with ./a.out