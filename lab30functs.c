/** lab30functs.c
* ===========================================================  
* Name: Benjamin Tat
* Section: T6
* Project: Lab 30
* ===========================================================  */

#include "lab30functs.h"


/** ----------------------------------------------------------
 * @fn int count_ears(int num_bunnies);
 * @brief recursive function to count the number of ears on N bunnies
 * @param num_bunnies the input value, the number of bunnies
 * @return the total number of ears, assuming each has 2 ears
 * ----------------------------------------------------------
 */
int count_ears(int num_bunnies) {    
    // Base Case
    if (num_bunnies == 0) {
        return 0;
    }
    // Recursive Case
    else {
        return 2 + count_ears(num_bunnies - 1);
    }
}

/** ----------------------------------------------------------
 * @fn int num_buns_in_pyramid(int num_levels);
 * @brief recursive function to count the totals number of buns in a bunny pyramid
 * @param num_levels the input value, the number of levels in the pyramid
 * @return the total number of buns, assuming the top level has 1 bun, and each lower
 *         has 1 more bun than the last
 * ----------------------------------------------------------
 */
int num_buns_in_pyramid(int num_levels) {
    // Base Case
    if (num_levels < 2) {
        return num_levels;
    }
    // Recursive Case
    else {
        return num_levels + num_buns_in_pyramid(num_levels - 1);
    }
}

/** ----------------------------------------------------------
 * @fn int count_ears2(int num_bunnies);
 * @brief recursive function to count the number of ears on N bunnies
 * @param num_bunnies the input value, the number of bunnies
 * @return the total number of ears, assuming each odd bun has 2 ears
 *         but the even buns have 3 ears
 * ----------------------------------------------------------
 */
int count_ears2(int num_bunnies) {
    // Base Case
    if (num_bunnies == 0) {
        return 0;
    }
    // Recursive Case
    else if (num_bunnies%2 == 1){ 
        return 2 + count_ears2(num_bunnies - 1);
    }
    else {
        return 3 + count_ears2(num_bunnies - 1);
    }
}