/** lab30-2.c
* ===========================================================  
* Name: Benjamin Tat
* Section: T6
* Project: Lab 30
* ===========================================================  */

#include "lab30functs.h"

int main(void) {

    // Read the zyBooks Lab writeup.  Then answer to the questions below in each printf() statement
    // 1) You decide to make the base case when num_levels < 2, fill in
    // the correct return value for this case in the printf() below.
    printf("When num_levels < 2 -> return num_levels;\n");

    // 2) Now you need to work out the recursive case, fill in the correct
    // return value for this case in the printf() below.
    printf("Otherwise -> return num_levels + num_buns_in_pyramid(num_levels - 1);\n");

    // 3) Now you need to actually code up the function, the prototype is
    // already in the .h file and a skeleton of the definition is below
    // main() in this file.
    int numLevels = 10;
    printf("An adorable pyramid of %d levels needs %d buns\n", numLevels,num_buns_in_pyramid(numLevels));

    return 0;
}