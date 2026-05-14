#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int acount = 0, bcount = 0, ccount = 0;

    char m[3][3];
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        cin>>m[i][j];
        if(m[i][j] == 'A') acount++;
        else if(m[i][j] == 'B') bcount++;
        else if(m[i][j] == 'C') ccount++;
      }
    }
    if(acount != 3) cout<<'A'<<endl;
    else if(bcount != 3) cout<<'B'<<endl;
    else if(ccount != 3) cout<<'C'<<endl;
  }
}