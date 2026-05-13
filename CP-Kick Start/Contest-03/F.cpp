#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  cin>>s;

  while(s.find("WUB") != string::npos){
    s.replace(s.find("WUB"),3," ");
  }

  while(s.find("  ") != string::npos){
    s.replace(s.find("  "), 2, " ");
  }

  if(s[0] == ' '){
    s.erase(0,1);
  }
  if(s[s.length()-1] == ' '){
    s.erase(s.length()-1,1);
  }
    
  cout<<s;
  return 0;
}