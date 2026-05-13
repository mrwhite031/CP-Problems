#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  while(n--){
    long long x;
    cin>>x;
    long long result = 0;
    while(x > 0){
      result += x;
      x /= 2;
    }
    cout<<result<<endl;
  }
}