#include<bits/stdc++.h>
using namespace std;
int main(){
   string a;
   cin>>a;

   for(int i = 0; i < a.size(); ){
      if(a[i] == '-' && a[i+1] == '.'){
         cout<<1;
         i += 2;
      }
      else if(a[i] == '-' && a[i+1] == '-'){
         cout<<2;
         i += 2;
      }
      else{
         cout<<0;
         i++;
      }
   }
}