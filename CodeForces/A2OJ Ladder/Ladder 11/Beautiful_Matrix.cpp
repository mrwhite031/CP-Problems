#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<vector<int>>mat(5, vector<int>(5));

   for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
         cin>>mat[i][j];
      }
   }

   int row = -1, col = -1;

   for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
         if(mat[i][j] == 1) {
            row = i;
            col = j;
            break;
         }
         
      }
   }
   cout<<abs(row-2)+abs(col-2);
}