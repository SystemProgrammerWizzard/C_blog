#include <stdio.h>

int main(void){
    // printf() is use to write and output to the screen
    // take 2 parameters, onces is the format and the variable
    int a = 10;
    printf("The value of A is %d", a);
    // Ouput: The value of A is 10@SystemProgrammerWizzard ➜ .../C_blog/posts/fundamentals/printf (main) $ gcc main.c


    // Also you can have special characters, programmer call them escape squences like \n \t, ...
    // The main goals of these is to format the output so make it look better
    printf("\t\tThe value of A is %d\n", a);
    // Ouput: @SystemProgrammerWizzard ➜ .../C_blog/posts/fundamentals/printf (main) $ ./a.out 
    //            The value of A is 10

    return 0;
}

// Compile with gcc main.c
// Execute with ./a.out