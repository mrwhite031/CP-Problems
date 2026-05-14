#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    signed long long n,z;
    cin>>n>>z;
    signed long long num[n];
    int maxval = 0;
    for(signed long long i = 0; i < n; i++){
      cin>>num[i];
      int val = num[i] | z;
      maxval = max(maxval,val);
    }
    cout<<maxval<<endl;
  }
}