#include<iostream>
#include<vector>

using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>v(n);

  int total = 0;
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    total += x;
    v[i] = total;
  }

  int m;
  cin>>m;
  for(int i = 0; i < m; i++){
    int y;
    cin>>y;
    int pile = lower_bound(v.begin(), v.end(), y) - v.begin();
    cout<<pile+1<<endl;
    }
}