#include <bits/stdc++.h>
using namespace std;

int n, m, now, visited[100001], cnt[100001];
int dx[] = {1, -1, 2};

int main()
{
    cin >> n >> m;
    if (n == m)
    {
        cout << 0 << '\n'
             << 1;
        return 0;
    }
    queue<int> q;
    q.push(n);
    visited[n] = 1;
    cnt[n] = 1;
    while (q.size())
    {
        now = q.front();
        q.pop();
        for (int next : {now + 1, now - 1, now * 2})
        {
            if (next < 0 || next >= 100001)
                continue;
            if (!visited[next])
            {
                visited[next] = visited[now] + 1;
                cnt[next] += cnt[now];
                q.push(next);
            }
            else if (visited[next] == visited[now] + 1)
            {
                cnt[next] += cnt[now];
            }
        }
    }
    cout << visited[m] - 1 << '\n'
         << cnt[m];
    return 0;
}