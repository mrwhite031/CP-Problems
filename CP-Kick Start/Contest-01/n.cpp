#include<iostream>
using namespace std;
int main(){

  int x;
  cin>>x;
  if((x % 4 == 0) && (x % 400 !=0)){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }


  return 0;
}