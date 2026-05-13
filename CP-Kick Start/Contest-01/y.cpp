#include<iostream>
using namespace std;

int main(){
  int a,b,c,x,y;
  cin>>a>>b>>c>>x>>y;
  
  int max = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
  int min = (a < b) ? (a < c) ? a : c : (b < c) ? b : c;
  int mid = a+b+c-max-min;

  int max1 = (x>y)? x:y;
  int min1 = (x<y)? x:y;

  if(mid <= max1 && min <= min1){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  return 0;
}