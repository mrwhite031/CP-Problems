#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int>num(n);
      int count = 0;
      for(int i = 0; i < n; i++){
         cin>>num[i];
         if(num[i] % 2 == 1) count++;
      }

      cout<<(count % 2 == 0 ? "YES" : "NO")<<endl;
   }
}