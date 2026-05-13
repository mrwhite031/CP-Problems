//revise the logic

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){

  double h,m;
  cin>>h>>m;
  double hour = h*30;
  double minute = m*(11/2.0);
  double angel = abs(hour-minute);

  if(angel > 180){
    angel = 360-angel;
  }
  cout<<fixed<<setprecision(7)<<angel;
  return 0;
}