#include<iostream>
#include<stack>
using namespace std;

string isBalanced(string s);

int main(){
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    cout<<isBalanced(s)<<endl;
  }
}


string isBalanced(string s){
  stack<char>st;

  for(auto i : s){

    if(i == '(' || i == '{' || i == '['){
      st.push(i);
    }

    else{

      if(st.empty()){
        return "NO";
      }

      char top = st.top();
      if((i == ')' && top == '(') || (i == '}' && top == '{') || (i == ']' && top == '[')){
        st.pop();
      }
      else{
        return "NO";
      }

    }
    
  }

  if(st.empty()){
    return "YES";
  }
  
  else{
    return "NO";
  }
}