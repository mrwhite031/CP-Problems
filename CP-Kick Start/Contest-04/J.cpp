#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }  
    int max = arr[0],min = arr[0];
    for(int i = 0; i < n; i++){
      max |= arr[i];
      min &= arr[i];
    }
    cout<<(max-min)<<endl;
    
  }
}