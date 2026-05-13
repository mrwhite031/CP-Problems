#include<iostream>
#include<deque>
using namespace std;
int main(){
  int x;
  cin>>x;
  
  for(int i = 1; i <= x; i++){
    int n,m;
    cin>>n>>m;

    deque<int>dq;

    cout<<"Case "<<i<<":"<<endl;

    for(int j = 0; j < m; j++){
      string command;
      cin>>command;
      
      if(command == "pushLeft"){
        int val;
        cin>>val;
        
        if(dq.size() >= n){
          cout<<"The queue is full"<<endl;        
        }
        else{
          dq.push_front(val);
          cout<<"Pushed in left: "<<val<<endl;
        }
      }

      else if(command == "pushRight"){
        int val;
        cin>>val;
        if(dq.size() >= n){
          cout<<"The queue is full"<<endl;
        }
        else{
          dq.push_back(val);
          cout<<"Pushed in right: "<<val<<endl;
        }
      }
      
      else if(command == "popLeft"){
        if(dq.empty()){
          cout<<"The queue is empty"<<endl;
        }
        else{
          int val = dq.front();
          dq.pop_front();
          cout<<"Popped from left: "<<val<<endl;
        }
      }

      else if(command == "popRight"){
        if(dq.empty()){
          cout<<"The queue is empty"<<endl;
        }
        else{
          int val = dq.back();
          dq.pop_back();
          cout<<"Popped from right: "<<val<<endl;
        }
      }
    }
  }
}