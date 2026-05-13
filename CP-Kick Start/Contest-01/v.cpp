#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    int e = 0;
    int o = 0;
    
    
    if(a % 2 == 0){
      e++;
    }
    else{
      o++;
    }

    if(b % 2 == 0){
      e++;
    }
    else{
      o++;
    }

    if(c % 2 == 0){
      e++;
    }
    else{
      o++;
    }
    
    
    if(e >= 1 && o >= 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO" <<endl;
    }
    
    return 0;
}