#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;

  vector<long long>deck(n+1);

  int card = k;

  while(card > 0){
     for(int i = 1; i <= n && card > 0; i++){
        deck[i] += card;
        card--;
     }

     for(int i = n; i >= 1 && card > 0; i++){
        deck[i] += card;
        card--;
     }
  }
  cout<<*max_element(deck.begin()+1, deck.end())<<endl;


}
}