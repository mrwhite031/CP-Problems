#include<iostream>
#include<map>

using namespace std;
int main(){
  long long n;
  cin>>n;
  map<long long, long long>num;
  for(int i = 0; i < n; i++){
    int x;
    cin>>x;
    num[x]++;
  }
  long long pair = (n * (n - 1)) / 2;

  long long duplicate = 0;
  for(auto i : num){
    long long j = i.second;
    duplicate += (j * (j - 1)) / 2;
  }

  cout<<pair - duplicate;
  
}