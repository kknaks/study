#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int n, a[20][20], visited[20][20], ret = INF;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

bool isFlower(int y, int x)
{
    if (visited[y][x])
        return 0;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n || visited[ny][nx])
            return 0;
    }
    return 1;
}

int setFlower(int y, int x)
{
    visited[y][x] = 1;
    int s = a[y][x];
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        visited[ny][nx] = 1;
        s += a[ny][nx];
    }
    return s;
}

void eraseFlower(int y, int x)
{
    visited[y][x] = 0;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        visited[ny][nx] = 0;
    }
}

void goFlower(int cnt, int price)
{
    if (cnt == 3)
    {
        ret = min(ret, price);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isFlower(i, j))
            {
                goFlower(cnt + 1, price + setFlower(i, j));
                eraseFlower(i, j);
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    goFlower(0, 0);
    cout << ret << '\n';
}