#include<iostream>
#include<map>
using namespace std;
int main(){
  int n;
  cin>>n;
  map<string, int>m;
  string name;
  int mark;

  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    if(x == 1){
      cin>>name>>mark;
      m[name] += mark;
    }
    else if(x == 2){
      cin>>name;
      m.erase(name);
    }
    else if(x == 3){
      cin>>name;
      cout<<m[name]<<endl;
    }
  }
}