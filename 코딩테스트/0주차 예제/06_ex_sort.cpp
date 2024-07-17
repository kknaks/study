#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}
int main(){
    // // 기본사용법
    // vector<int> a;
    // int b[5];

    // for (int i = 5; i >=1; i--) a.push_back(i);
    // for (int i = 5; i >=1; i--) b[5-i] = i;

    // sort(a.begin(),a.end());
    // sort(b,b+5);
    // for (int i : a) cout << i << ' ';
    // cout << '\n';
    // for (int i : b) cout << i << ' ';
    // cout << '\n';

    // sort(a.begin(),a.end(),greater<int>());
    // sort(b,b+5,less<int>());
    // for (int i : a) cout << i << ' ';
    // cout << '\n';
    // for (int i : b) cout << i << ' ';
    // cout << '\n';

    // sort(a.begin(),a.end(),less<int>());
    // sort(b,b+5,greater<int>());
    // for (int i : a) cout << i << ' ';
    // cout << '\n';
    // for (int i : b) cout << i << ' ';
    // cout << '\n';

    //pair 
    vector<pair<int, int>> v;
    for (int i = 10; i >= 1; i--) v.push_back({i, 10 - i});

    sort(v.begin(),v.end());
    for(pair<int,int> i : v) cout << i.first << " : " << i.second <<'\n';
    
    sort(v.begin(),v.end(),cmp);
    for(auto it : v) cout <<it.first << " : "<<it.second<<'\n';

    return 0;
}