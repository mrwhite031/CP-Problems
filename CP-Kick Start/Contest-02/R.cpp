#include<iostream>
#include<vector>

using namespace std;
int main(){
  int n;
  cin>>n;
  vector<string>m;
  for(int i = 0; i < n; i++){
    string name;
    cin>>name;
    
    int found = 0;
    for(int j = 0; j < m.size(); j++){
      if(m[j] == name){
        found = 1;
        break;
      }
    }
    if(found){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
      m.push_back(name);
    }
  }
}