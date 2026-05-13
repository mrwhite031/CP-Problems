#include<iostream>
using namespace std;

int code1[1000000], code2[1000000];
string name[1000000];

int main(){
  int n;
  cin>>n;
    
  for(int i = 0; i < n; i++){
    cin>>code1[i]>>code2[i]>>name[i];
  }
  int t;
  cin>>t;

  while(t--){
    int q1, q2;
    cin>>q1>>q2;  
    string answer = "";        
    for(int i = 0; i < n; i++){
      if(code1[i] == q1 && code2[i] == q2){
        answer = name[i];
      }
    }       
    cout<<answer<<endl;
    }
    return 0;
}