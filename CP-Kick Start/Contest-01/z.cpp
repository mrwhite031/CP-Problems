#include<iostream>

using namespace std;

int main(){
    char arr[4];
    for(int i=0;i<4;i++){
      cin>>arr[i];
    }
    if((arr[0] == arr[3]) && (arr[1] == arr[2])){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    
    return 0;
}