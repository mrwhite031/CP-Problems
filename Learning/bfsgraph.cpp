#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];

int main(){
   int n,e;
   cin>>n>>e;

   for(int i = 0; i < n; i++){
      int a,b;
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
   }

   vector<int>dist(n+1,-1);
   queue<int>q;
   dist[1] = 0;
   q.push(1);

   while(!q.empty()){
      int u = q.front();
      q.pop();

      for(int v: adj[u]){
         if(dist[v] == -1){
            dist[v] = dist[u] + 1;
            q.push(v);
         }
      }
   }

   for(int i = 1; i <= n; i++){
      cout<<"Node "<<i<<" distance "<<dist[i]<<endl;
   }
}