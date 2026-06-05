#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100005];

int main(){
   int n,m;
   cin>>n>>m;

   for(int i = 0; i < m; i++){
      int a,b;
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
   }

   vector<int>dist(n+1, -1);
   vector<int>prev(n+1, -1);

   queue<int>q;
   dist[1] = 0;
   q.push(1);

   while(!q.empty()){
      int u = q.front();
      q.pop();

      for(int v : adj[u]){
         if(dist[v] == -1){
            dist[v] = dist[u] + 1;
            prev[v] = u;
            q.push(v);
         }
      }
   }

   if(dist[n] == -1){
      cout<<"Impossible"<<endl;
      return 0;
   }

   cout<<dist[n] + 1<<endl;

   vector<int>path;
   int cur = n;

   while(cur != -1){
      path.push_back(cur);
      cur = prev[cur];
   }

   reverse(path.begin(), path.end());

   for(int i = 0; i < path.size(); i++){
      cout<<path[i]<<" ";
   }
}