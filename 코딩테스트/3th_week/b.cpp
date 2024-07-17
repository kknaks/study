#include <bits/stdc++.h>
using namespace std;

int r, c, k, visited[10][10], y, x;
char a[10][10];
const int dy[] = {0, -1};
const int dx[] = {1, 0};

int main()
{
    cin >> r >> c >> k;
    for (int i = 0; i < r; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < c; j++)
        {
            a[i][j] = s[j];
        }
    }

    queue<pair<int, int>> q;

    q.push({r - 1, 0});
    visited[r - 1][0] = 1;
    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 2; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= r || nx >= c || a[ny][nx] == 'T')
                continue;
            visited[ny][nx] += 1;
            q.push({ny, nx});
        }
    }
    cout << visited[0][c - 1];
    return 0;
}