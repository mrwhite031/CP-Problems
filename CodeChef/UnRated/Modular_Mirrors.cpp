#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n, m;
    cin>>n>>m;
    if((n + 1) % 3 != 0){
      cout<<-1<<"\n";
      continue;
    }
    long long pattern[6] = {1, 1, 0, m - 1, m - 1, 0};
        
    for(int i = 0; i < n; i++){
      cout<<pattern[i % 6]<<" ";
    }
    cout<<"\n";
  }
    return 0;
}