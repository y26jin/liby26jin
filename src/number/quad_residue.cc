#include <iostream>
using namespace std;

int find_quad(int a, int n){
  if(a%2 == 1) return 0;

  int x=1;
  while(x*x % n != a){
    x++;
  }
  cout<<"x = "<<x<<" found quad"<<endl;

  return 1;
}

int main(){
  int n;
  cin>>n;

  for(int i = 1 ; i < n ; i++){
    if(find_quad(i,n) == 1){
      // there's quadradic residue
      cout<<"there exists quad for num = "<<i<<endl;
    }
  }
  return 0;
}
