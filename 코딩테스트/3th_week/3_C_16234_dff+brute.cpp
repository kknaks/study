#include <bits/stdc++.h>
using namespace std;

int n, l, r, a[51][51], visited[51][51], sum, days;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
vector<pair<int, int>> v;

void dfs(int y, int x)
{
    visited[y][x] = 1;
    v.push_back({y, x});
    sum += a[y][x];
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n || visited[ny][nx])
            continue;
        if (abs(a[y][x] - a[ny][nx]) >= l && abs(a[y][x] - a[ny][nx]) <= r)
            dfs(ny, nx);
    }
}

int main()
{
    cin >> n >> l >> r;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    while (true)
    {
        bool flag = 0;
        fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v.clear();
                sum = 0;
                if (visited[i][j])
                    continue;
                dfs(i, j);
                if (v.size() == 1)
                    continue;
                int pop = sum / v.size();
                for (pair<int, int> u : v)
                {
                    a[u.first][u.second] = pop;
                    flag = 1;
                }
            }
        }

        if (!flag)
            break;
        days++;
    }
    cout << days << '\n';
}