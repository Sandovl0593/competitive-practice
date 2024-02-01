#include <bits/stdc++.h>
using namespace std;

int main() {
  int n ;
  int A=0;
  int D=0;
  string s;

  cin>>n;
  cin>>s;
  for(int i=0 ;i<n;i++ ){
      if(s[i]=='A'){
          A=A+1;
      }
      else{
          D=D+1;
      }
  }
  if(A>D){
      cout<<"Anton";

  }
  else if  (A==D){
      cout<<"Friendship";
  }
  else{
      cout<<"Danik";
  }

}