#include<iostream>
using namespace std;

int main(){
  char arr[5];
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
  int okay = 1;

  for(int i=0;i<4;i++){
    if(arr[i] >= arr[i+1]){
      okay = 0;
      break;
    }
  }

  if(okay){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  
  return 0;
}