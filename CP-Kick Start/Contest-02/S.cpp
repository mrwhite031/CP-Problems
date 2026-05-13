#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    cin.ignore();

    map<int, string, greater<int>>m;

    for(int i = 0; i < x; i++){
      string line;
      getline(cin, line);

      int space = line.rfind(' ');
      string name = line.substr(0,space);
      int year = stoi(line.substr(space+1));

      m[year] = name;
    }

    for(auto i : m){
      cout<<i.second<<endl;
    }
  }
}