#include <bits/stdc++.h>
using namespace std;

int n, check[10];
char a[20];
vector<string> ret;

bool good(char x, char y, char op)
{
    if (x < y && op == '<')
        return true;
    if (x > y && op == '>')
        return true;
    return false;
}

void go(int idx, string num)
{
    if (idx == n + 1)
    {
        ret.push_back(num);
        return;
    }

    for (int i = 0; i < 10; i++)
    {
        if (check[i])
            continue;
        if (idx == 0 || good(num[idx - 1], (char)i + '0', a[idx - 1]))
        {
            check[i] = 1;
            go(idx + 1, num + to_string(i));
            check[i] = 0;
        }
    }
    return;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    go(0, "");
    sort(ret.begin(), ret.end());
    cout << ret[0] << '\n'
         << ret[ret.size() - 1] << '\n';
}