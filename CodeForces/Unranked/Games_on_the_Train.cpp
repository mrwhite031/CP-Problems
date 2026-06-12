#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int>num(n);
      for(int i = 0; i < n; i++){
         cin>>num[i];
      }
      cout<<(*max_element(num.begin(), num.end())-*min_element(num.begin(), num.end()))+1<<endl;
   }
}