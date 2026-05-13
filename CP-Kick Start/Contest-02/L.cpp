#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(){
  int a;
  cin>>a;
  while(a--){
    int n;
    string w1;
    cin>>n>>w1;

    if(w1 == "FIFO"){
      queue<int>q;
      for(int i = 0; i < n; i++){
        string w2;
        cin>>w2;
        if(w2 == "IN"){
          int x;
          cin>>x;
          q.push(x);
        }
        else{
          if(q.empty()){
            cout<<"None"<<endl;
          }
          else{
            cout<<q.front()<<endl;
            q.pop();
          }
        }
      }
    }

    else if(w1 == "FILO"){
      stack<int>st;
      for(int i = 0; i < n; i++){
        string w2;
        cin>>w2;
        if(w2 == "IN"){
          int x;
          cin>>x;
          st.push(x);
        }
        else{
          if(st.empty()){
            cout<<"None"<<endl;
          }
          else{
            cout<<st.top()<<endl;
            st.pop();
          }
        }
      }
    }
  }
  return 0;
}