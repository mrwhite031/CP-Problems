#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;

   int ans = 0;
   int min = 240-k;
   int count = 0;

   for(int i = 1; i <= n; i++){
      ans += i*5;
      if(ans > min) break;
      count++;
      
   }
   cout<<count<<endl;
}