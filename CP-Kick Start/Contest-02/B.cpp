#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
  int n,val,s,r1,r2;
  cin>>n;
  vector<int>v;
  for(int i = 0; i < n; i++){
    cin>>val;
    v.push_back(val);
  }
  cin>>s;
  v.erase(v.begin()+s-1);

  cin>>r1>>r2;
  v.erase(v.begin()+r1-1,v.begin()+r2-1);

  cout<<v.size()<<endl;
  for(auto i : v){
    cout<<i<<" ";
  }
}