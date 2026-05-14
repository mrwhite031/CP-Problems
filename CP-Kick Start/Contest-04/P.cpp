#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int x,y;
    cin>>x>>y;
    long long sum = x ^ y;
    cout<<(sum & -sum)<<endl;
  }
}