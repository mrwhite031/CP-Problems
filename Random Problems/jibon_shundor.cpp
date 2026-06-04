#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, t;
   cin>>n>>t;
   int arr[n];
   for(int i = 0; i < n; i++){
      cin>>arr[i];
   }
   int okay = 0;
   for(int i = 0; i < n; i++){
      if(arr[i] == t){
         cout<<i+1;
         okay = 1;
         break;
      }
      
   }
   if(!okay) cout<<-1;
}