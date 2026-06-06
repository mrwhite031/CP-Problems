#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> g;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

vector<vector<int>> bfs(int sx, int sy) {

    vector<vector<int>> dist(n, vector<int>(m, -1));

    queue<pair<int,int>> q;

    if (!valid(sx, sy)) return dist;
    if (g[sx][sy] == '#') return dist;

    dist[sx][sy] = 0;
    q.push({sx, sy});

    while (!q.empty()) {

        auto cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for (int k = 0; k < 4; k++) {

            int nx = x + dx[k];
            int ny = y + dy[k];

            if (!valid(nx, ny)) continue;
            if (g[nx][ny] == '#') continue;
            if (dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }
    return dist;
}

int main() {
    cin >> n >> m;
    g.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    int sx = 0;
    int sy = 0;
    vector<vector<int>> dist = bfs(sx, sy);
    return 0;
}