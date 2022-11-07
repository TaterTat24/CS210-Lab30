/** lab30-1.c
* ===========================================================  
* Name: Benjamin Tat
* Section: T6
* Project: Lab 30
* ===========================================================  */

#include "lab30functs.h"

int main(void) {

    // Read the zyBooks Lab writeup.  Then answer to the questions below in each printf() statement
    // 1) You decide to make the base case when num_bunnies == 0, fill in
    // the correct return value for this case in the printf() below.
    printf("When num_bunnies == 0 -> return 0;\n");

    // 2) Now you need to work out the recursive case, fill in the correct
    // return value for this case in the printf() below.
    printf("Otherwise -> return 2 + count_ears(num_bunnies - 1);\n");

    // 3) Now you need to actually code up the function, the prototype is
    // already in the .h file and a skeleton of the definition is below
    // main() in this file.
    int numBunnies = 100;
    printf("%d bunnies have %d ears\n", numBunnies, count_ears(numBunnies));

    return 0;
}