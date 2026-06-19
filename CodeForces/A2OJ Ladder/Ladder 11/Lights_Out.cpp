#include<bits/stdc++.h>
using namespace std;
int main(){
   int p[3][3];
   int light[3][3];

   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         cin>>p[i][j];
         light[i][j] = 1;
      }
   }

   int dx[] = {0, 0, 0, 1, -1};
   int dy[] = {0, 1, -1, 0, 0};

   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         if(p[i][j] % 2 == 1){
            for(int k = 0; k < 5; k++){
               int ni = i + dx[k];
               int nj = j + dy[k];

               if(ni >= 0 && ni < 3 && nj >= 0 && nj < 3){
                  light[ni][nj] ^= 1;
               }
            }
         }
      }
   }

   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         cout<<light[i][j];
      }
      cout<<endl;
   }
}