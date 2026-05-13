#include<iostream>
using namespace std;
int main(){

  int x;
  cin>>x;
  int iseven = 0;
  int neg = 0;

  if(x % 2 == 0){
    iseven = 1;
  }
  if(x < 0 && x % 3 == 0){
    neg = 1;
  }

  if(iseven && neg){
    cout<<"NO";
  }
  else if(iseven || neg){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }


  return 0;
}