#include <bits/stdc++.h>
using namespace std;

const int n = 5;
int cnt;
string a[n] = {"사과", "딸기", "포도", "참외", "메론"};

void total()
{
    for (int i = 0; i < (1 << n); i++)
    {
        string ret = "";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                ret += (a[j] + " ");
            }
        }
        cnt++;
        cout << ret << '\n';
    }
    cout << cnt << '\n';
}

void select(int num)
{
    string ret = "";
    for (int j = 0; j < n; j++)
    {
        if (num & (1 << j))
            ret += a[j] + " ";
    }
    cout << ret << '\n';
    cnt++;
    return;
}
int main()
{
    total();
    cout << "----------\n";
    cnt = 0;
    for (int i = 1; i < n; i++)
    {
        select(1 | (1 << i));
    }
    cout << cnt << '\n';
}
