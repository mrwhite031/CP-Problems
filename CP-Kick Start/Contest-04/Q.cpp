#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;

    int n = a-1;
    int sum,rem = n % 4;

    if(rem == 0) sum = n;
    else if(rem == 1) sum = 1;
    else if(rem == 2) sum = n+1;
    else sum = 0;

    if(sum == b) cout<<a<<endl;
    else if((sum ^ b) == a) cout<<a+2<<endl;
    else cout<<a+1<<endl;
  }
}