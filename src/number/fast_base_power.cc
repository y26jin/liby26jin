#include "liby26jin.h"
#include "numberutil.h"

/*
 * Note: this is dumb. It didnt take overflow into account. Will be fixed in the next commit
 */
static unsigned long long two_exp(int base){
  return (unsigned long long)(base * base);
}
/*
 * Fast way to compute pow(a,b)
 * How it works is firstly compute modulo of radix, e.g. 7 = 2*3 + 1
 * Thus a^2 need recomputing for three times
 * In total, the compute time reduces to 4 instead of 7(for b=7)
 */
unsigned long long fast_base_power(int base, int exp){
  int modexp, mainexp = 0;
  int temp = exp;
  mainexp = (exp-exp%2)/2;
  modexp = exp%2;
  unsinged long long two_instance = two_exp(base);
  unsigned long long mod_instance = base;
  for(int i=0;i<modexp;i++){
    mod_instance = mod_instance * base;
  }
  int main_instance = two_instance;
  for(int i=0;i<mainexp;i++){
    main_instance = main_instance * two_instance;
  }

  return main_instance * mod_instance;
}
