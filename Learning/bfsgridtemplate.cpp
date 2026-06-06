#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> g;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

vector<vector<int> > bfs(int sx, int sy) {
    vector<vector<int> > dist(n, vector<int>(m, -1));
    queue<pair<int,int> > q;

    if (sx < 0 || sx >= n || sy < 0 || sy >= m) return dist;
    if (g[sx][sy] == '#') return dist;

    dist[sx][sy] = 0;
    q.push(make_pair(sx, sy));

    while (!q.empty()) {
        pair<int,int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (g[nx][ny] == '#') continue;
            if (dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[x][y] + 1;
            q.push(make_pair(nx, ny));
        }
    }

    return dist;
}

int main() {
    cin >> n >> m;
    g.resize(n);
    for (int i = 0; i < n; i++) cin >> g[i];

    int sx = 0, sy = 0;   // source cell
    vector<vector<int> > dist = bfs(sx, sy);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}