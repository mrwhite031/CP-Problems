#include<iostream>
#include<vector>

using namespace std;
int main(){
  int s;
  cin>>s;

  while(s--){
    int n;
    cin>>n;

    vector<pair<int,int>>p(n);

    for(int i = 0; i < n; i++){
      cin>>p[i].first>>p[i].second;
    }

    sort(p.begin(), p.end(), [](auto a, auto b)){
      if(p.first == p.second)
    }
  }
  
}