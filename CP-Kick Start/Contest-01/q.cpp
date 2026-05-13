#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  int x,y,z;
  cin>>a>>b>>c;
  cin>>x>>y>>z;

  
  if(a == 0 && b == 0 && c == 0){
    cout << 0;
    return 0;
  }

  int count = 0;
  while(x >= a && y >= b && z >= c){
    count++;
    x-=a;
    y-=b;
    z-=c;
  }
  cout<<count;

  return 0;
}