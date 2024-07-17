#include <bits/stdc++.h>
using namespace std;

char a[51][51];
int n, m, visited[51][51], dist;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

vector<pair<int, int>> land;

void dfs(int y, int x)
{
    memset(visited, 0, sizeof(visited));
    queue<pair<int, int>> q;
    q.push({y, x});
    visited[y][x] = 1;

    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] || a[ny][nx] == 'W')
                continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
            dist = max(dist, visited[ny][nx]);
        }
    }
}

int main()
{
    cin >> n >> m;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        for (int j = 0; j < m; j++)
        {
            a[i][j] = s[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'L')
                dfs(i, j);
        }
    }

    cout << dist - 1 << '\n';
}