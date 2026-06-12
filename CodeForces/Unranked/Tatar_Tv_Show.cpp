#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      string bi;
      cin>>bi;

      int okay = 1;

      for(int i = 0; i < k; i++){
         int count = 0;

         for(int j = i; j <= n; j += k){
            if(bi[j] == '1') count++;
         }

         if(count % 2 == 1){
            okay = 0;
            break;
         }
      }
      cout << (okay ? "YES" : "NO") << '\n';
      
   }
}