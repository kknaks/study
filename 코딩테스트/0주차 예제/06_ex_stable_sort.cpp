#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> pairs = {{5,1},{2,2},{5,3},{3,4},{2,5}};
    cout << "original"<<" : ";
    for (auto it : pairs) cout<<it.first<<','<<it.second << '/';
    cout << '\n';

    cout <<"sort"<<" : ";
    sort(pairs.begin(),pairs.end());
    for (pair<int,int> it : pairs) cout<<it.first<<','<<it.second << '/';
    cout << '\n';

    cout <<"stable_sort"<<" : ";
    stable_sort(pairs.begin(),pairs.end());
    for (const auto &p : pairs) cout<<p.first<<','<<p.second << '/';
    cout << '\n';

    return 0;
}
