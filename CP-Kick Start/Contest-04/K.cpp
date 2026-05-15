#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];

    int sum = 0;
    
    for(int i = 0; i < n; i++) sum ^= a[i];

    for(int i = 0; i < n; i++){
      if((sum ^ a[i]) == a[i]){
        cout<<a[i]<<endl;
        break;
      }  
    }
  }
}