#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
const int max_n = 200000;
int n, k, visited[max_n], prev[max_n], ret, here, cnt, next;
vector<int> v;
queue<int> q;

int main()
{
    cin >> n >> k;
    q.push(n);
    visited[n] = 1;
    while (q.size())
    {
        here = q.front();
        q.pop();
        if (here == k)
        {
            ret = visited[k];
            break;
        }
        for (int next : {here - 1, here + 1, here * 2})
        {
            if (next < 0 || next >= max_n || visited[next])
                continue;
            visited[next] = visited[here] + 1;
            q.push(next);
            prev[next] = here;
        }
    }

    int track = k;
    v.push_back(track);
    while (track != n)
    {
        v.push_back(prev[track]);
        track = prev[track];
    }
    cout << ret - 1 << '\n';
    reverse(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
}