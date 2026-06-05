#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }

    // Distance array
    // -1 = not visited
    vector<vector<int>> dist(n, vector<int>(m, -1));

    // Direction arrays
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    // Start BFS from (0,0)
    int sx = 0, sy = 0;

    queue<pair<int,int>> q;

    dist[sx][sy] = 0;
    q.push({sx, sy});

    while(!q.empty()){

        pair<int,int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for(int k = 0; k < 4; k++){

            int nx = x + dx[k];
            int ny = y + dy[k];

            // Boundary check
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            // Wall check
            if(grid[nx][ny] == '#') continue;

            // Visited check
            if(dist[nx][ny] != -1) continue;

            // Valid cell
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }

    // Print distances
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}