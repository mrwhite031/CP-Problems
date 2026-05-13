#include<iostream>
#include<set>

using namespace std;
int main(){
  int n;
  cin>>n;
  set<int>s;
  for(int i = 0; i < n; i++){
    int idx,val;
    cin>>idx>>val;
    if(idx == 1){
      s.insert(val);
    }
    else if(idx == 2){
      s.erase(val);
    }
    else if(idx == 3){
      if(s.find(val) != s.end()){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }
  }
}