#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>num(n*n);
   int ans = 0;
   for(int i = 0; i < n*n; i++){
      cin>>num[i];
      ans += num[i];
   }

   cout<<(ans == 0 ? "YES" : "NO")<<endl;
}