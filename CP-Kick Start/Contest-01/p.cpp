#include<iostream>

using namespace std;
int main(){

  int x;
  cin>>x;
  for(int i=0;i<x;i++){
    int l,r,u,d;
    cin>>l>>r>>u>>d;
    if(l == r && u == d && r == u){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
  
  return 0;
}