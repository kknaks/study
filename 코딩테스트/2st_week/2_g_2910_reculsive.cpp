#include <bits/stdc++.h>
using namespace std;

map<int,int> mp, mp_first;
vector<pair<int,int>> v;

int c,a[1000000000];
int n;

bool cmp(pair<int,int> a, pair<int,int> b){
    if (a.first == b.first){
        return mp_first[a.second] < mp_first[b.second];
    }
    return a.first > b.first;
}
int main(){
    cin >> n >> c;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
        if (mp_first[a[i]] == 0) mp_first[a[i]] = i + 1;
    }

    for (auto it : mp){
        v.push_back({it.second,it.first});
    }

    sort(v.begin(),v.end(),cmp);
    for (auto it : v){
        for (int i = 0; i < it.first; i++){
            cout << it.second << " ";
        }
    }
}
