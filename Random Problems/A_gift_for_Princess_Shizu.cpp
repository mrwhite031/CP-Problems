#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n,x;
      cin>>n>>x;
      vector<int>num(n);

      for(long long i = 0; i < n; i++){
         cin>>num[i];
      }

      long long ans = 0;

      for(long long i = 0; i < n/2; i++){
         if(num[i] != num[n-i-1]){
            long long diff = abs(num[i] - num[n-i-1]);
            ans += min(diff,x);
         }
      }
      cout<<ans<<endl;
   }
}