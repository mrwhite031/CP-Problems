#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    if(x <= 20){
      cout<<x*10<<endl;
    }
    else cout<<(x-20)*2.5+200<<endl;
  }

}
