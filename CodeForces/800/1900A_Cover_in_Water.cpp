#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
 
  while(n--){
    int x;
    cin>>x;
    char b[x];
    for(int i = 0; i < x; i++){
      cin>>b[i];
    }
    int okay = 0,count = 0;
    for(int i = 0; i < x; i++){
      if(b[i] == '.') count++;
 
      if(b[i] == '.' && b[i+1] == '.' && b[i+2] == '.'){
        okay = 1;
      }
    }
    if(okay){
      cout<<2<<endl;
    }
    else{
      cout<<count<<endl;
    }
  }
}