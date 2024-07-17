#include <bits/stdc++.h>
using namespace std;

int n, ret = -987654321;
string s;
vector<char> op_str;
vector<int> num;

int oper(char op, int a, int b)
{
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else
        return a * b;
}

void go(int here, int _num)
{
    if (here == num.size() - 1)
    {
        ret = max(ret, _num);
        return;
    }

    go(here + 1, oper(op_str[here], _num, num[here + 1]));
    if (here + 2 <= num.size() - 1)
    {
        int temp = oper(op_str[here + 1], num[here + 1], num[here + 2]);
        go(here + 1, oper(op_str[here], _num, temp));
    }
    return;
}

int main()
{
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            op_str.push_back(s[i]);
        else
            num.push_back(s[i]);
    }

    go(0, num[0]);
    cout << ret;
    return 0;
}