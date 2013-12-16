#include "liby26jin.h"
#include "numberutil.h"

/*
 * Note: this is dumb. It didnt take overflow into account. Will be fixed in the next commit
 */
static int two_exp(int base){
  return base * base;
}

int fast_base_power(int base, int exp){
  int modexp, mainexp = 0;
  int temp = exp;
  while(temp % 2 == 0){
    mainexp++;
    temp = temp>>2;
  }
  modexp = temp;
  int two_instance = two_exp(base);
  int mod_instance = base;
  for(int i=0;i<modexp;i++){
    mod_instance = mod_instance * base;
  }
  int main_instance = two_instance;
  for(int i=0;i<mainexp;i++){
    main_instance = main_instance * two_instance;
  }

  return main_instance * mod_instance;
}
