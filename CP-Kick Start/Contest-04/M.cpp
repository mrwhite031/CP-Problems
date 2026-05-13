#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    int num = 1;
    while(num * 2 <= x) num *= 2;
    cout<<num-1<<endl;
  }
}