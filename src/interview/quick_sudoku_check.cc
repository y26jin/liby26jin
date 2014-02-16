#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
  srand(time(NULL));
  int a[9][9];
  int x[9] = {0};
  for(int i = 0;i<9;i++){
    for(int j = 0;j<9;j++){
      a[i][j] = rand()%9 + 1;
    }
  }

  // check rows and columns
  for(int i = 0 ;i< 9 ;i++){
    for(int j = 0;j<9; j++){
      x[a[i][j]] ++ ;
      if(x[a[i][j]] > 1){
	cout<<"Fail: "<<i+1<<" x "<<j+1<<endl;
	return 0;
      }
    }
    
    for(int j=0;j<9;j++){
      x[j]=0;
    }

    for(int j=0;j<9;j++){
      x[a[j][i]]++;
      if(x[a[j][i]] > 1){
	cout<<"Fail: "<<i+1<<" x "<<j+1<<endl;
	return 0;
      }
    }
  }
  for(int j=0;j<9;j++){
    x[j]=0;
  }

  // check boxes
  for(int i = 0; i <3 ; i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<3;k++){
	for(int l=0;l<3;l++){
	  if(++x[a[3*i+k][3*j+l]] > 0) {
	    cout<<"Fail: "<<3*i+k<<" x "<<3*j+l<<endl;
	    return 0;
	  }
	}
      }
    }
  }
  
  return 0;
}
