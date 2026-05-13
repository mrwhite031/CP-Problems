#include<iostream>
#include<map>

using namespace std;
int main(){
  int n;
  cin>>n;
  
  map<int, int>num;
  int count = 0;
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    num[x]++;
    
    if(num[x] > count){
      count = num[x];
    }
  }
  cout<<count;
}