#include <iostream>
using namespace std;

int main() {
  int x;
  cin>>x;
  int pay = 100+x*4;
  if(pay > 300){
    cout<<300;
  }
  else{
    cout<<pay;
  }
  
  return 0;
}