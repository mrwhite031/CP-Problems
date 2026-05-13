#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  
  map<char, int, greater<int>>m;

  for(auto i : s){
    m[i]++;
  }
  
  char max = m.begin()->first;
  int count = m.begin()->second;

  for(int i = 0; i < count; i++){
    cout<<max;
  }
  cout<<endl;
  return 0;
}