#include <iostream>

using namespace std;

int FailTable[256];

void buildFailTable(char *s){
  FailTable[0] = 0;
  FailTable[1] = 0;

  for(int i=2;i<strlen(s);i++){
    int j = FailTable[i-1];
    while(){
      if(s[j]==s[i-1]){
	FailTable[j] = j+1;
	break;
      }
      if(j==0){
	FailTable[j]=0;
	break;
      }

      j=FailTable[j];
    }
  }
}

void kmp(char *s1, char *s2){
  int i=0,j=0;
  buildFailTable(s2);
  
  while(1){
    if(i==strlen(s1)) break; // finish search

    if(s1[i] == s2[j]){
      if(j==strlen(s2)){
	// found an exact match
	j=0;
	cout<<"Found a match at "<<i<<", match is "<<s2<<endl;
      }
      i++;
      j++;

    }
    if(i > 0) i = FailTable[i];
    else j++;
  }
}

int main(){
  char s1[256], s2[256];
  cin>>s1>>s2;

  kmp(s1,s2);
  return 0;
}
