#include <stdio.h>

int main(void){
    // A for loops is just amount of time you run something. What i meant by that sometime there are 3 of you
    // Each of you need -> eat breakfast -> change clothes for school -> go to school
    // Then i can says do  eat breakfast -> change clothes for school -> go to school for each of you, do it 3 times
    // There are 3 ways you can make a for loop (while-loops, do-while, for-loop)
    // for-loop
    for (int i = 1; i < 4; i++) {
        morning_routine(i);
    }

    // while-loop
    int i = 1;
    while (i < 4) {
        morning_routine(i);
        i++;
    }

    // do-while loop (runs at least once)
    int k = 1;
    do {
        morning_routine(k);
        k++;
    } while (k < 4);

    return 0;
}

// Compile with gcc main.c
// Execute with ./a.out