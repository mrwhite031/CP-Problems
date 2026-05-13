#include<iostream>
using namespace std;
int main(){
  int a;
  cin>>a;
  if(((a >= 10 && a <= 99) || (a <= -10 && a >= -99)) && (a % 3 == 0) && (a % 2 == 0)){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }

  return 0;
}