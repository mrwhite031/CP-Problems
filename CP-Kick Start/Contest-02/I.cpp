#include<iostream>
#include<queue>

using namespace std;

int main(){
  int n;
  cin>>n;

  queue<string>q;
  for(int i = 0; i < n; i++){
    int num;
    cin>>num;
    if(num == 1){
      string color;
      cin>>color;
      q.push(color);
    }
    else if(num == 2){
      string color = q.front();
      cout<<color<<endl;
      q.pop();
      q.push(color);
    }
  }
}