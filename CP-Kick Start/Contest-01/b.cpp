#include<iostream>
using namespace std;

int main(){
  int a,b;
  cin>>a>>b;

  if(a == 2 && b == 2){
    cout<<"Yes";
    return 0;
  }



  int arr1[] = {1,3,5,7,8,10,12};
  int arr2[] = {4,6,9,11};
  int arr1a = 0, arr1b = 0, arr2a = 0, arr2b = 0;

  for(int i=0;i<7;i++){
    if(arr1[i] == a){
      arr1a=1;
    }
    if(arr1[i] == b){
      arr1b=1;
    }
  }

  for(int j=0;j<4;j++){
    if(arr2[j] == a){
      arr2a=1;
    }
    if(arr2[j] == b){
      arr2b=1;
    }
  }

  if((arr1a && arr1b) || (arr2a && arr2b)){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
  
  return 0;
}