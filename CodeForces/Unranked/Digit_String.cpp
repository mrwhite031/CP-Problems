#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string num;
      cin>>num;
      
      int count = 0;
      int size = num.size();

      for(int i = size-1; i >= 0; i--){
         if((num[i] + num[i-1]) % 4 == 0){
            count++;
         }
      }
      cout<<count<<endl;
   }
}