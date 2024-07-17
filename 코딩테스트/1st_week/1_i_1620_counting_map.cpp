#include <bits/stdc++.h>
using namespace std;

map<string,int> smp;
map<int,string> imp;
int n,m;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n ; i++){
        cin >> s;
        smp[s] = i;
        imp[i] = s;
    }

    for (int i = 0; i < m; i++){
        cin >> s;
        if (atoi(s.c_str())){
            cout << imp[atoi(s.c_str())] << '\n';
        }else cout << smp[s] << '\n';

    }
}
