/** lab30.h
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 30
* Documentation: DOC STATEMENT
* ===========================================================  */

#ifndef LAB30FUNCTS_H
#define LAB30FUNCTS_H

#include <stdio.h>

/** ----------------------------------------------------------
 * @fn int count_ears(int num_bunnies);
 * @brief recursive function to count the number of ears on N bunnies
 * @param num_bunnies the input value, the number of bunnies
 * @return the total number of ears, assuming each has 2 ears
 * ----------------------------------------------------------
 */
int count_ears(int num_bunnies);

/** ----------------------------------------------------------
 * @fn int num_buns_in_pyramid(int num_levels);
 * @brief recursive function to count the totals number of buns in a bunny pyramid
 * @param num_levels the input value, the number of levels in the pyramid
 * @return the total number of buns, assuming the top level has 1 bun, and each lower
 *         has 1 more bun than the last
 * ----------------------------------------------------------
 */
int num_buns_in_pyramid(int num_levels);

/** ----------------------------------------------------------
 * @fn int count_ears2(int num_bunnies);
 * @brief recursive function to count the number of ears on N bunnies
 * @param num_bunnies the input value, the number of bunnies
 * @return the total number of ears, assuming each odd bun has 2 ears
 *         but the even buns have 3 ears
 * ----------------------------------------------------------
 */
int count_ears2(int num_bunnies);

#endif