#include <iostream>

using namespace std;

#define ORDER 

int quick_mod_power(int x, int y, int mod){
  if(y == 0) return 1;
  else if(y == 1) return x%mod;
  else if(y % 2 == 0) return (quick_mod_power(x,y/2,mod) * quick_mod_power(x,y/2,mod)) % mod;
  else return (quick_mod_power(x,y/2,mod)*quick_mod_power(x,y/2,mod)*x) % mod;
}

int main(){

  int n;
  cin>>n;
  for(int i=1;i<=n-1;i++){
    for(int j=1;j<=n-1;j++){
      if(quick_mod_power(i,j,n) == 1){
	cout<<"base = "<<i<<", order = "<<j<<endl;
	if(j == n-1){
	  cout<<"-----half mod = "<<quick_mod_power(i,j/2,n)<<endl;
	}
	break;
      }
    }
  }

  return 0;
}
