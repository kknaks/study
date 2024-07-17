#include <bits/stdc++.h>
using namespace std;

int r, c, visited[25][25], dist;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
char a[25][25];
vector<char> v;

void go(int y, int x, int cnt)
{
    if (find(v.begin(), v.end(), a[y][x]) != v.end()) {
        dist = max(dist, cnt);
        return;
    }
    visited[y][x] = 1;
    v.push_back(a[y][x]);
    cnt++;
    for (char i : v) cout << i << " ";
    cout << '\n';
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= r || nx >= c || visited[ny][nx])
            continue;

        go(ny, nx, cnt);
    }
    visited[y][x] = 0;
    v.pop_back();
    return;
}

int main()
{
    cin >> r >> c;
    for (int I = 0; I < r; I++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[I][j];
        }
    }
    int cnt = 0; // 처음 호출 시 cnt는 0으로 설정
    go(0, 0, cnt);
    cout << dist;
    return 0;
}
