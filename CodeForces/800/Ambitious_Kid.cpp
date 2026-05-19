#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   int count = 0;
   for(int i = 0; i < n; i++){
      cin>>a[i];
      count++;
   }
   if(count == 1) cout<<abs(a[0]);
   
   else{
      int okay = 0;
      for(int i = 0; i < n; i++){
         if(a[i] == 0) okay = 1;
         break;
      }
      int min = 1e9;
      for(int i = 0; i < n; i++){
         if(abs(a[i]) < min) min = abs(a[i]);
      }
      if(okay) cout<<0;
      else cout<<min;
   }
   
}