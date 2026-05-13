#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int atotal = a+c;
  if(atotal > b) cout<<(atotal-b)+1;
  else if(atotal == b) cout<<1;
  else cout<<0;
}