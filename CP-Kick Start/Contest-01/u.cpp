#include <iostream>
using namespace std;

int main(){
  long long a,b,n;
  cin>>a>>b>>n;
    
  long long count = n / 3;
  long long r = n % 3;

  if(3*a <= b){
    cout<<n*a;
    return 0;
  }

  if(r == 0){
    cout<<count*b;
  }
  else{
    cout<<count*b+r*a;
  }
  return 0;
}