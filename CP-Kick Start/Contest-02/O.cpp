#include<iostream>
#include<queue>
using namespace std;

int main(){
  int n;
  cin>>n;
  queue<int>q1,q2;

  int x;
  cin>>x;
  while(x--){
    int a;
    cin>>a;
    q1.push(a);
  }

  int y;
  cin>>y;
  while(y--){
    int b;
    cin>>b;
    q2.push(b);
  }
  int fights = 0;
  while(!q1.empty() && !q2.empty() && fights < 1000000){
    fights++;
    int c1 = q1.front();
    q1.pop();
    int c2 = q2.front();
    q2.pop();
    if(c1 > c2){
      q1.push(c2);
      q1.push(c1);
    }
    else{
      q2.push(c1);
      q2.push(c2);
    }
  }
  if(q1.empty()){
    cout<<fights<<" 2";
  }
  else if(q2.empty()){
    cout<<fights<<" 1";
  }
  else{
    cout<<-1;
  }
}