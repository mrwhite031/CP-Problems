#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,x,y;
    cin>>n>>x>>y;
    int a[n];
    long long sum = 0;
    for(int i = 0; i < n; i++){
      cin>>a[i];
      sum += a[i];
    }

    if((x+sum) % 2 == (y % 2)) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
    
  }
}