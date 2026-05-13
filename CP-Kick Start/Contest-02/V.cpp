#include<iostream>
#include<map>
using namespace std;

int main(){
  int n;
  cin>>n;
  map<string, int>m;

  for(int i = 0; i < n; i++){
    string word;
    cin>>word;
    if(m.find(word) == m.end()){
      cout<<"OK"<<endl;
      m[word] = 1;
    }
    else{
      string neww = word+to_string(m[word]);
      m[word]++;
      m[neww] = 1;
      cout<<neww<<endl;
    }
  }
}