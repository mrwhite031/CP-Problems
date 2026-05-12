#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    map<int, int>m;
    for(int i = 0; i < x; i++){
      int p;
      cin>>p;
      m[p]++;
    }
    if(m.size() >= 3) cout<<"No"<<endl;
    else if(m.size() == 2){
      auto it = m.begin();
      int count1 = it->second;
      it++;
      int count2 = it->second;

      if(abs(count1-count2) <= 1) cout<<"Yes\n";
      else cout<<"No\n";
    }
    else cout<<"Yes\n";
  }
}