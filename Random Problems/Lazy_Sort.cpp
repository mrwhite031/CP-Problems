#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i = 0; i < n; i++){
      cin>>arr[i];
   }

   int count = 0;

   for(int i = 0; i <n; i++){
      bool isswap = false;
      for(int j = 0; j < n-i-1; j++){
         if(arr[j] > arr[j+1]){
            count++;
            swap(arr[j],arr[j+1]);
            isswap = true;
         }
      }
      if(!isswap) break;
   }

   sort(arr.begin(), arr.end());
   for(int i = 0; i < n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<count;
}