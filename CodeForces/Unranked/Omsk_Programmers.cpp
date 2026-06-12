#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      int cnt = 0;
      int big = max(a,b);
      int small = min(a,b);

      if(big == small) cout<<0<<endl;

      else{

         while(small <= big){
            small += max((small+1),(big/c));
            cnt++;
            
         }
         cout<<cnt<<endl;
      }

      
   }
}