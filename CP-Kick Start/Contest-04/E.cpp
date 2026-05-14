#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    signed long long x;
    cin>>x;
    signed long long ans = x & -x;
    
    if(x == ans){
      if(x == 1) ans = 3;
      else ans += 1;
    }
    cout<<ans<<endl;
  }
}