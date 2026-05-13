#include<iostream>
using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  int big = max(a,b);
  int small = min(a,b);

  cout<<(big*small)-small;
  
  return 0;
}