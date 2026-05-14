#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;

    int grp = 0;
    int size = s.size();
    for(int i = 0; i < size; i++){
      if(s[i] == '0' && (i == 0 || s[i-1] == '1')){
        grp++;
      }
    }
    cout<<min(grp,2)<<endl;
  }
}