#include "liby26jin.h"
#include "numberutil.h"

int main(){
  std::cout<<"Start testing..."<<std::endl;
  for(int i = 0;i<20;i++){
    std::cout<<"TEST:"<<i+1<<" base="<<i<<" exp="<<i*2<<" result="<<fast_base_power(i,i*2)<<std::endl;
  }
  return 0;
}
