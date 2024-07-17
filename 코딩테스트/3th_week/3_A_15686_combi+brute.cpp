#include <bits/stdc++.h>
using namespace std;

int n, m, a[54][54], result = 987654;
vector<vector<int>> chiken_idx;
vector<pair<int, int>> home, store;

void combi(int start, vector<int> v)
{
    if (v.size() == m)
    {
        chiken_idx.push_back(v);
        return;
    }

    for (int i = start + 1; i < store.size(); i++)
    {
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                home.push_back({i, j});
            if (a[i][j] == 2)
                store.push_back({i, j});
        }
    }

    vector<int> v;
    combi(-1, v);

    for (vector<int> chiken : chiken_idx)
    {
        int sum = 0;
        for (pair<int, int> h : home)
        {
            int dist = 104;
            for (int ch : chiken)
            {
                dist = min(dist, abs(h.first - store[ch].first) + abs(h.second - store[ch].second));
            }
            sum += dist;
        }
        result = min(result, sum);
    }

    cout << result;
}