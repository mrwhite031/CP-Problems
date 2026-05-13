#include<iostream>
#include<map>

using namespace std;

int main(){
  int n;
  cin>>n;
  map<int,int>m;
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    m[x]++;
  }
  int result = 0;
  for(auto i : m){
    int val = i.first;
    int count = i.second;

    if(count >= val){
      result += count - val;
    }
    else{
      result += count;
    }
  }
  cout<<result;
  return 0;
}