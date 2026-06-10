#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;

   while(t--){
      int a,b,c;
      cin>>a>>b>>c;

      int count = 0;

      int big = max(a,b);

      int small = min(a,b);
      
      for(int i = 0; i < big; i++){
         if(a != b){
            a = __gcd(a,c);
            b = __gcd(b,c);
            count++;
         }
      }


      cout<<max(count, big-small)<<endl;
   }
}