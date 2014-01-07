#ifndef _PRIMENUM_H_
#define _PRIMENUM_H_

#include "liby26jin.h"
#include "numberutil.h"

/*
 * Determine if a number has Fermat witness
 */
extern int fermat_witness(int x);

/*
 * Determine if a number has strong witness
 */
extern int strong_prob_witness(int x);

/*
 * Fermat test to find prime numbers
 */
extern int fermat_test(int start, int end, int *primelist);

/*
 * Millar-Rabin test to find prime numbers
 */
extern int millar_rabin(int start, int end, int *primelist);

/*
 * Prime find API
 */
extern int find_prime(void (*algm), int start, int end, int *primelist);
#endif
