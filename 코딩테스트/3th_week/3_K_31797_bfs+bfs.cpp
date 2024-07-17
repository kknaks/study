#include <bits/stdc++.h>
using namespace std;

const int max_n = 1504;
int r, c, visited_swan[max_n][max_n], visited[max_n][max_n], y, x, swanY, swanX, days;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
queue<pair<int, int>> swanQ, swan_tempQ, waterQ, water_tempQ;
char a[max_n][max_n];

void Qclear(queue<pair<int, int>> &Q)
{
    queue<pair<int, int>> empty;
    swap(Q, empty);
}

void melting_water()
{
    while (!waterQ.empty())
    {
        tie(y, x) = waterQ.front();
        waterQ.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= r || nx >= c || visited[ny][nx])
                continue;
            if (a[ny][nx] == 'X')
            {
                a[ny][nx] = '.';
                visited[ny][nx] = 1;
                water_tempQ.push({ny, nx});
            }
        }
    }
}

bool move_swan()
{
    while (!swanQ.empty())
    {
        tie(y, x) = swanQ.front();
        swanQ.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= r || nx >= c || visited_swan[ny][nx])
                continue;
            visited_swan[ny][nx] = 1;
            if (a[ny][nx] == '.')
            {
                swanQ.push({ny, nx});
            }
            else if (a[ny][nx] == 'X')
            {
                swan_tempQ.push({ny, nx});
            }
            else if (a[ny][nx] == 'L')
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '.' || a[i][j] == 'L')
            {
                visited[i][j] = 1;
                waterQ.push({i, j});
            }
            if (a[i][j] == 'L')
            {
                swanY = i;
                swanX = j;
            }
        }
    }

    swanQ.push({swanY, swanX});
    visited_swan[swanY][swanX] = 1;
    while (true)
    {
        if (move_swan())
            break;
        melting_water();
        waterQ = water_tempQ;
        swanQ = swan_tempQ;
        Qclear(water_tempQ);
        Qclear(swan_tempQ);
        days++;
    }
    cout << days << '\n';
    return 0;
}