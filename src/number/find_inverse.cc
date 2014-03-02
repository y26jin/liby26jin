#include <iostream>

using namespace std;

void print_inverse(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if((i*j)%n==1) cout<<"i="<<i<<" j="<<j<<" "<<endl;
    }
  }
}

int main(){
  int n;
  cin>>n;

  print_inverse(n);
  return 0;
}
