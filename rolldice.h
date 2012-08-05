/*
 * rolldice.h - v1.13 - 05 August 2010
 * (c) Stevie Strickland, 1999-2012
 *
 * This program has been placed under the GPL.  Any bugfixes or enhancements
 * will be greatly appreciated :)
 *
 * Stevie Strickland - sstrickl@ccs.neu.edu
 */

/* Standard includes */
#include <stdio.h>
#include <stdlib.h>

/* For GNU getopt */
#include <getopt.h>

/* For GNU readline */
#include <readline/readline.h>

/* For the time() function */
#include <time.h>

/* For the rand() and srand() functions */
#include <math.h>

/* For some bounds */
#include <limits.h>

/* The following #defines give the position of each important dice-related
 * number inside of the dice_nums array.  The final #define gives us the
 * size of the dice_nums array, which should be the number of other 
 * #defines below.
 */
#define NUM_ROLLS 0
#define NUM_DICE 1
#define NUM_SIDES 2
#define MULTIPLIER 3
#define MODIFIER 4
#define NUM_DROP 5
#define DICE_ARRAY_SIZE 6


// Defines values for the random number file to use
typedef enum {UNDEF, URANDOM, RANDOM} rand_type;

// External function declarations for using rolldice() and kin.
extern int *parse_string(const char const *dice_string);
extern int rolldie(const int num_sides);
extern void init_random(const rand_type rand_file);
