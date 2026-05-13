#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x,k;
    cin>>n>>x>>k;
    map<int, int, greater<int>>m;
    for(int i = 0; i < n; i++){
      int p;
      cin>>p;
      m[p]++;
    }
    int count = 0,cluster = 0;
    for(auto i : m){
      count += i.second;
      cluster++;

      if(cluster == k) break;
    }
    cout<<min(count, x)<<endl;
  }
}