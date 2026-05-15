#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
      cin>>a[i];
    }

    int ec = 0,div = 1e9;

    for(int i = 0; i < n; i++){
      if(a[i] % 2 == 0){
        ec++;
        int cdiv = 0;

        while(a[i] % 2 == 0){
          a[i] /= 2;
          cdiv++;
        }

        if(cdiv < div){
          div = cdiv;
        }
      }
    }

    if(ec == 0) cout<<0<<endl;
    else if(ec < n) cout<<ec<<endl;
    else cout<<div+n-1<<endl;
    
  }
}