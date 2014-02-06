#include <iostream>
#include <cstring>
#define STR_LEN 256
using namespace std;

void brute(char *s1, char *s2){
  int i=0, j=0;
  
  while(1){
    if(i == strlen(s1)) break;
    if(s1[i] == s2[j]){
      i++;
      j++;
      if(j==strlen(s2)){
	// match found
	cout<<"Found a match at "<<i<<endl;
      }

    }
    else{
      j = 0;
      i++;
    }
  }
}

int main(){
  char s1[STR_LEN], s2[STR_LEN];
  cin>>s1>>s2;
  brute(s1, s2);
  return 0;
}
