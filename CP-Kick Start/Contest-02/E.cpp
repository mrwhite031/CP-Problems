#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int t;
  scanf("%d", &t);
  
  while(t--){
    int n;
    scanf("%d", &n);
    vector<pair<int,int>>p(n);

    for(int i = 0; i < n; i++){
      scanf("%d %d", &p[i].first, &p[i].second);
    }

    sort(p.begin(), p.end(), [](auto &a, auto &b){
      if(a.first == b.first){
        return a.second > b.second;
      }
      return a.first < b.first;
    });

    for(int i = 0; i < n; i++){
      printf("%d %d\n", p[i].first, p[i].second);
    }
  }
  
  return 0;
}