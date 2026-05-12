#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
    for(int i = 0; i < t; i++){
      int n,x;
      cin>>n>>x;
      int num[n];
      for(int i = 0; i < n; i++){
        cin>>num[i];
      }
      int maxdist = num[0];
 
      for(int i = 1; i < n; i++){
        maxdist = max(maxdist, num[i] - num[i-1]);
      }
      if((x-num[n-1])*2 > maxdist){
        maxdist = (x-num[n-1])*2;
      }
      cout<<maxdist<<endl;
    }
}