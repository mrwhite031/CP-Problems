#include<bits/stdc++.h>
using namespace std;

bool dist(int n){
  bool seen[10] = {false};
  while(n > 0){
    int digit = n % 10;
    if(seen[digit]) return false;
    seen[digit] = true;
    n /= 10;
  }
  return true;
}

int main(){
  int n;
  cin>>n;
  while(1){
    n++;
    if(dist(n)){
      cout<<n<<endl;
      break;
    }
  }  
  
}