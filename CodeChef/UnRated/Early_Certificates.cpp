#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,m;
      cin>>n>>m;
      string n1,m1;
      cin>>n1>>m1;

      int size = min(n,m);

      vector<char>name;

      for(int i = 0; i < size; i++){
         if(n1[i] == m1[i]){
            name.push_back(n1[i]);
         }
         else break;
      }

      for(int i = 0; i < name.size(); i++){
         cout<<name[i];
      }
      cout<<endl;
   }
}