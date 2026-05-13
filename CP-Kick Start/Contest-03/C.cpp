#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  int result = 0;

  while(n--){
    string a;
    cin>>a;
    if(a.at(1) == '+'){
      result++;
    }
    else{
      result--;
    }
  }
  cout<<result;
}