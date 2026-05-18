#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n,a,b;
      cin>>n>>a>>b;
      
      long long single = n * a;
      long long best = (n / 3) * b + (n % 3) * a;
      long long grp = ((n / 3) + (n % 3 == 0 ? 0 : 1)) * b;

      cout<<min({single, best, grp})<<endl;

   }
}