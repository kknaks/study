#include <bits/stdc++.h>
using namespace std;

int n, m, visited[301][301], jy, jx, ty, tx;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
char a[301][301];

int main()
{
    cin >> n >> m;
    cin >> jy >> jx >> ty >> tx;
    jy--;
    jx--;
    ty--;
    tx--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    queue<pair<int, int>> q;
    q.push({jy, jx});
    visited[jy][jx] = 1;
    int cnt = 0;

    while (a[ty][tx] != '0')
    {
        cnt++;
        queue<pair<int, int>> temp;
        while (q.size())
        {
            int y, x;
            tie(y, x) = q.front();
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int ny = y + dy[i];
                int nx = x + dx[i];
                if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx])
                    continue;
                visited[ny][nx] = cnt;
                if (a[ny][nx] != '0')
                {
                    a[ny][nx] = '0';
                    temp.push({ny, nx});
                }
                else
                {
                    q.push({ny, nx});
                }
            }
        }
        q = temp;
    }
    cout << visited[ty][tx];
}
