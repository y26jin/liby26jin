#include <iostream>
#include <cstring>
#define STR_LEN 256
using namespace std;


int int_mod(int a, int b){
  return ((a%b + b))%b;
}

void karp(char *s1, char *s2){
  int n = strlen(s1), m = strlen(s2);
  if(n < m) return;

  int hp = 0;

  // calculate the hash value of s2

  for (int i=0;i<m;i++){
    hp = int_mod(hp*2 + s2[i],5431);
  }

  // calculate the hash value of first segment of length n of s1
  int ht = 0;
  int E = (2<<m) % 5431;
  for(int i=0;i<m;i++){
      ht = int_mod(ht*2+s1[i],5431);

      }

  if(ht == hp){
    // see if this is a collision

    /*    int x=0,y=0,t=0;
    while(1){
      t++;
      if(s1[x] != s2[y]){
	x++;
	y++;
      }
      if(t == m) break;
    }
    */
      cout<<"the pattern found in s1 is ";
      for(int i=0;i<m;i++){
	cout<<s1[i];
      }
      cout<<endl;

  }


  // rolling hash

  for(int i=m;i<n;i++){
    //    int E = (2>>m) % 5431;
    /*    ht = int_mod(ht - int_mod(s1[i - m] * E, 5431), 5431);
    ht = int_mod(ht * 2, 5431);
    ht = int_mod(ht + s1[i], 5431);*/
    ht = (ht * 2+ s1[i])%5431 - (E *(s1[i-m] % 5431))%5431;

    if(ht == hp){
      // see if this is a collision

      /*int x=0,y=0,t=0;
      while(1){
	t++;
	if(s1[x] != s2[y]){
	  x++;
	  y++;
	}
	if(t == m) break;
	}*/
      cout<<"the pattern found in s1 is ";
      for(int j=i;j<=i+m;j++){
        cout<<s1[j];
      }
      cout<<endl;

    }

  }
}

int main(){
  char s1[STR_LEN], s2[STR_LEN];
  cin>>s1>>s2;

  karp(s1,s2);
  return 0;
}
