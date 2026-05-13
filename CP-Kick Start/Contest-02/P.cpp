#include<iostream>
#include<map>

using namespace std;
int main(){
  int n;
  cin>>n;

  map<string, string>list;

  for(int i = 0; i < n; i++){
    string oldname,newname;
    cin>>oldname>>newname;

    if(list.find(oldname) != list.end()){
      string original = list[oldname];
      list.erase(oldname);
      list[newname] = original;
    }
    else{
      list[newname] = oldname;
    }
  }
  cout<<list.size()<<endl;

  for(auto i : list){
    cout<<i.second<<" "<<i.first<<endl;
  }


}