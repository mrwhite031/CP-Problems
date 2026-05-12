#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    int p[x];
    for(int i = 0; i < x; i++) cin>>p[i];
    cout<<(p[0] == 1 ? "YES" : "NO")<<endl;
  }
}