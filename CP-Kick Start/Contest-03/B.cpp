#include<iostream>
#include<string>
#include<stack>

using namespace std;
int main(){
  int n;
  cin>>n;

  while(n--){
    int o;
    string s;
    cin>>o>>s;

    stack<char>st;

    for(char c : s){
      if(!st.empty() && st.top() == c){
        st.pop();
      }
      else{
        st.push(c);
      }
    }

    if(st.empty()){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }

}