#include<iostream>
#include<algorithm>

using namespace std;
int main(){
  int n;
  cin>>n;
  cin.ignore();
  while(n--){
    string line;
    getline(cin, line);

    int size = line.length();
    int first = 0;
    for(int i = 0; i <= size; i++){
      if(i == size || line[i] == ' '){
        reverse(line.begin() + first, line.begin() + i);
        first = i+1;
      }
    }
    cout<<line<<endl;
  }
}