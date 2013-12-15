#include "liby26jin.h"
#include "generateprime.h"

/*
 * Determine if a number is Fermat witness
 * TODO:
 *      Write a function to compute a to the bth
 *      Write a function to compute module of big number
 */
int fermat_witness(int x){
  unsigned long long temp = 1;
  for(int i=1;i<=x;++i){
    // Here using brute force to compute radix number
    for(int j=1;j<x;j++){
      temp = temp * i;
    }
    if(temp % x != 1) return COMPOSITE;
  }
  return PRIME;
}

/*
 * Determine if a number is a strong probable witness
 * Assumption: SPRB to base 2
 * TODO: Number Decompostion function
 */
int strong_prob_witness(int x){
  int d = 0, s = 0, temp = x-1;
  while(temp % 2 == 0){
    s++;
    temp = temp/2;
  }
  d = temp;
  for(int i=1;i<=x;i++){
    int temp1=1;
    for(int j=0;j<d;j++){
      temp1 = temp1 * x;
    }
    if(temp1 % x != 1) return COMPOSITE;
    
    int temp2=1;
    for(int j=1;j<s;j++){
      int temp3 = 1;
      for(int t=0;t<j;t++) temp3=temp3*2;
      int temp4 = 1;
      for(int t=0;t<d*temp3;t++){
	temp4 = temp4 * x;
      }
      if(temp4 % x != 1) return COMPOSITE;
    }
  }

  return PRIME;
}

/*
 * Fermat test
 */
int fermat_test(int start, int end, int *primelist){
  if(start > end || start < 0 || end < 0){
    DEBUG("No prime number in a wrong interval!");
    return;
  }
}

/*
 * Millar-Rabin test
 */
int millar_rabin(int start, int end, int *primelist){
  if(start > end || start < 0 || end < 0){
    DEBUG("No prime number in a wrong interval!");
    return;
  }

  
}
